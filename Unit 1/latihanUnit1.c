#include <stdio.h>

int main(){
    //Deklarasi Variabel
    int v, s, t;
    float floatKecepatan, floatJarak, floatWaktu;
    
    // Menghitung Kecepatan
    printf("Menghitung Kecepatan\n");
    printf("\n Masukan Jarak (m): ");
    scanf("%d", &s);
    printf("Masukan Waktu (s): ");
    scanf("%d", &t);
    
    // Hasil Kecepatan
    floatKecepatan = (float)s / (float)t;
    printf("Kecepatannya adalah = %.2f m/s\n", floatKecepatan);

    // Menghitung Jarak
    printf("Menghitung Jarak \n");
    printf("\n Masukan Kecepatan (m/s): ");
    scanf("%d", &v);
    printf("Masukan waktu (s): ");
    scanf("%d", &t);

    // Hasil jarak
    floatJarak = (float)v * (float)t;
    printf("Jaraknya adalah = %.2f m\n", floatJarak);
    

    // Menghitung Waktu
    printf("Menghitung Waktu \n");
    printf("\n Masukan Jarak (m): ");
    scanf("%d", &s);
    printf("\n Masukan Kecepatan (m/s): ");
    scanf("%d", &v);

    // Hasil Waktu
    floatWaktu = (float)s / (float)v;
    printf("Waktu yang ditempuh adalah = %.2f detik\n", floatWaktu);

    return 0;
}

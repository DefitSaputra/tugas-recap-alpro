#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

// pertama ada deklarasi dari variabel i dan j yang di inisialisasi dengan nilai 2 dan 1
// lalu variabel i dilakukan looping while dengan i <=3, selama i kurang dari sama dengan 3 maka akan dicetak sebagai bilangan utama selama syarat itu memenuhi
// lalu variabel j juga sama dilakukan looping while dengan j<=2
// Setelah itu dari hasil looping tadi, dicetaklah j * i sebagai hasil perkalian
// Nilai J akan di increament kan selama perulangan bertambah satu
// Setelah loop selesai, variabel i diperbarui dengan increament i++ dan nilai j diulang kembali menjadi satu (j = 1)
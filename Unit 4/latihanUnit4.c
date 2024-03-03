#include <stdio.h>

int hitungKelilingPersegi(int sisi) {
    return 4 * sisi;
}

int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

int hitungVolumeKubus(int sisi) {
    return sisi * sisi * sisi;
}

int main() {
    int sisi;

    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    
    printf("Keliling Persegi: %d\n", hitungKelilingPersegi(sisi));

    
    printf("Luas Persegi: %d\n", hitungLuasPersegi(sisi));

    
    printf("Volume Kubus: %d\n", hitungVolumeKubus(sisi));

    return 0;
}

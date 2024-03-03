#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

// Saat menggunakan "scanf()" ketika input nama lengkap, outputnya hanya nama depan saja
// Tetapi saat menggunakan "fgets()" ketika input nama lengkap, outputnya nama lengkap

// Itu Karena fungsi "scanf()" digunakan untuk membaca satu buah kata pada teks dan 
// fungsi fgets() digunakan untuk membaca satu baris teks termasuk spacebar.
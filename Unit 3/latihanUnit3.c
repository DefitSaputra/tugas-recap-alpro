#include <stdio.h>

int main(){
    int jumlahElemen;

    printf("Masukan jumlah elemen: ");
    scanf("%d", &jumlahElemen);

    int array[jumlahElemen];
    int total = 0;

    printf("Masukkan nilai elemen:\n");
    for (int i = 0; i < jumlahElemen; i++) {
        printf("Elemen %d: ", i + 1);
        scanf("%d", &array[i]);

        total += array[i];
    }

     if (jumlahElemen <= 0) {
        printf("Jumlah elemen harus lebih dari 0.\n");
    }
     printf("Hasil penjumlahan seluruh elemen adalah: %d\n", total);

     return 0;    
}        
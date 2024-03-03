#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

// Pertama terdapat deklarasi, memasukan variabel integer "i" dan "j", kemudian kita menggunakan looping "for"
// dimana syarat penggunaan looping for sendiri adalah ketika jumlah iterasi diketahui, pada variabel i dimasukan nilai
// i = 2, i <= 3 dan ditambahkan increament setiap melakukan looping i++
// Lalu hasil looping dari variabel i dicetak menggunakan fungsi "printf()" sebagai Bilangan Utama
// Selanjutnya pada variabel j ditambahkan looping for dengan dimasukan nilai
// j = 1, j <= 2, dan ditambahkan increament setiap melakukan looping j++
// Lalu hasil looping dari variabel j dicetak menggunakan fungsi "printf()" sebagai Bilangan pengali
// Selanjutnya ada pencetakan sebagai Hasil perkalian antara variabel "i * j"
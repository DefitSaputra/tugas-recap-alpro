#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

// Pertama i diinisialisasi dengan nilai 2, dan j dideklarasikan tanpa inisialisasi
// Lalu program masuk ke looping yang berada di bagian luar yaitu do-while (i <= 3)
// Di setiap iterasi pada loopingnya program akan mencetak variabel i sebagai Bilangan utama
// Lalu program masuk ke looping dibagian dalam yaitu do-while(j <= 2) 
//  Di setiap iterasi pada loopingnya program akan mencetak variabel j sebagai Bilangan Pengali
// Dan program mencetak hasil perkalian j * i
// nilai j akan melakukan increament di setiap iterasinya
// setelah loop di dalam selesai variabel i juga di increament kan disetiap iterasi loop berjalan 
// Loop akan terus berjalan selama syarat masih terpenuhi...
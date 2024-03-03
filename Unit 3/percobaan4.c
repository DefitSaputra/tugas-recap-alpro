#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

// Pertama ada pendefinisian menggunakan '#define MAX_PERSONS' dengan nilai 3 dan '#define MAX_NAME_LENGTH' dengan nilai 20
// Array dua dimensi names digunakan untuk menyimpan nama-nama dengan dimensi MAX_PERSONS sebagai baris dan MAX_NAME_LENGTH sebagai kolom. 
// Array ini diinisialisasi dengan tiga nama yaitu "Roma", "Romi", dan "Romo"
// Array ages digunakan untuk memberi keterangan umur pada setiap nama yang tercantum dengan dimensi MAX_PERSONS
// Lalu program mencetak header name dan age
// Selanjutnya program menggunakan loop for untuk mencetak name dan age, dengan iterasinya mengikuti indeks loop nya

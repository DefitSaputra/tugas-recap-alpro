#include <stdio.h>

int main(){
    int jumlahTransaksi;
    int nominalTransaksi;
    int totalPengeluaran = 0;

    printf("Masukan Jumlah Transaksi: ");
    scanf("%d", &jumlahTransaksi);

    printf("Masukan Nominal Transaksi: \n");
    for(int i = 1; i <= jumlahTransaksi; i++){
        printf("Transaksi %d: ", i);
        scanf("%d", &nominalTransaksi);

        totalPengeluaran += nominalTransaksi;
    }

    if (jumlahTransaksi == 0)
    {
        printf("Hari ini kamu tidak ada Transaksi apapun \n");
    }
    

    printf("Total Pengeluaran Hari ini adalah: %d \n ", totalPengeluaran);
    printf("Jangan lupa untuk selalu berhemat! \n");

    return 0;
}
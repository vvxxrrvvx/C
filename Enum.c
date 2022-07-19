#include <stdio.h>

enum Hari{Senin = 1, Selasa = 2, Rabu = 3, Kamis = 4, Jumat =5 , Sabtu = 6, Minggu = 7};

int main(){

    enum Hari ini = Sabtu;

    //printf("%d\n", ini);

    if(ini == Sabtu || ini == Minggu){
        printf("\nIni hari libur! waktunya healing! :) ");
    }
    else{
        printf("\nAku harus sekolah hari ini ");
    }
 
 return 0;
}
#include <stdio.h>

int main(){

    int angka = 0;
    int hasil = 0;

    do
    {
        printf("Masukkan angka diatas 0 : ");
        scanf("%d", &angka);
        
        if(angka > 0)
        {
            hasil = hasil + angka;
        }
    
    }while(angka > 0);

    printf("Hasil = %d ", hasil);

 return 0;
}
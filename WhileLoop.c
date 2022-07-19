#include <stdio.h>
#include <string.h>

int main(){

    char nama[25];

    printf("\nMasukkan nama kamu : ");
    fgets(nama, 25, stdin);
    nama[strlen(nama) - 1] = '\0';
    
    while(strlen(nama) == 0){
        printf("\nHarap masukkan nama kamu!");
        printf("\nMasukkan nama kamu : ");
        fgets(nama, 25, stdin);
        nama[strlen(nama) - 1] = '\0';
    }

    printf("\nHello %s ", nama);


 return 0;
}
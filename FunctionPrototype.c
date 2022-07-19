#include <stdio.h>

int main(){

    char nama[] = "Vier";
    int umur = 19;

    hello(nama, umur);

 return 0;
}

void hello(char nama[], int umur){

    printf("\nHello %s", nama);
    printf("\nKamu berumur %d tahun ", umur);
}
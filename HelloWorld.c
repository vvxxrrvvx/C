#include <stdio.h>

int main(){
    // ; "" > <
    char nama[25];
    int umur;
    float tinggi;

    printf("\nSiapa nama kamu : ");
    scanf("%s", &nama);

    printf("Berapa umur kamu %s : ");
    scanf("%d", &umur);

    printf("Berapa tinggi badan kamu : ");
    scanf("%f", &tinggi);

    printf("\nHello %s", nama);
    printf("\nKamu berumur %d tahun", umur);
    printf("\nTinggi badan kamu adalah %.1fcm ", tinggi); 

 return 0;
}
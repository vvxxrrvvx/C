#include <stdio.h>

int main(){

    char nama[15];
    int umur;
    double tinggi;

    printf("Siapa nama kamu : ");
    scanf("%s", &nama);

    printf("Berapa tahun umur kamu %s : ");
    scanf("%d", &umur);

    printf("Berapa tinggi badan kamu? : ");
    scanf("%lf", &tinggi);

    if(umur >= 18 && tinggi >= 170.0 )
    {
        printf("\nUmur dan tinggi badan kamu sesuai persyaratan");
        printf("\nKamu boleh mendaftar");
    }
    else if(umur <= 10 && tinggi <= 145.0)
    {
        printf("\nKamu dilarang untuk mendaftar!");
        printf("\nKamu masih anak-anak");
    }
    else if(umur <= 10 && tinggi >= 170.0)
    {
        printf("\nKamu tetap dilarang untuk mendaftar!");
        printf("\nKamu masih anak-anak");
    }
    else
    {
        printf("\nKamu masih remaja");
    }

  return 0;
}
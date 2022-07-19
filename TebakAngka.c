#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    const int MIN = 1;
    const int MAX = 50;
    int tebak;
    int tebakan;
    int jawaban;

    srand(time(0));

    jawaban = (rand() % MAX) + MIN;

    printf("%d\n", jawaban);

    do{
        printf("\nTebak angka dari 1 sampai 50 : ");
        scanf("%d", &tebak);
        if(tebak > jawaban)
        {
            printf("\nTerlalu tinggi!");
        }
        else if(tebak < jawaban)
        {
            printf("\nTerlalu rendah");
        }
        else
        {
            printf("\nTEBAKAN KAMU BENAR!");
        }
        tebakan++;
    }while(tebak != jawaban);

    printf("\nJawaban : %d", jawaban);
    printf("\nTebakan : %d", tebakan);
 
 return 0;
}
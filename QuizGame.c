#include <stdio.h>
#include <ctype.h>

int main(){

    char pertanyaan[][100] = {"1. Apakah bumi itu bulat? : ",
                            "2. Hewan apa yang paling lucu",
                            "3. Berapa hasil 6/9 + 5/15"};
                            // cara bacanya 6 per 9(bukan 6 dibagi 9;( ) + 5 per 15

    char pilihan[][100] = {"A. Bumi itu datar", "B. Apa itu bumi?", "C. Yaa bumi itu bulat!", "D. Bumi itu berbentuk donat!",
                           "A. Anjing", "B. Kucing", "C. Paus", "D. Gurita",
                           "A. 7/9", "B. 1/2", "C. 3/4", "D. 1"};

    char jawaban[3] = {'C', 'B', 'D'};
    int nomerpertanyaan = sizeof(pertanyaan)/sizeof(pertanyaan[0]);

    char tebak;
    int score;

    for(int x = 0; x < nomerpertanyaan; x++)
    {
        printf("\n");
        printf("%s\n", pertanyaan[x]);

        for(int v = (x * 4); v < (x * 4) + 4; v++)
        {
            printf("%s\n", pilihan[v]);
        }

        printf("\nTebak : ");
        scanf("%c", &tebak);
        scanf("%c");

        tebak = toupper(tebak);

        if(tebak == jawaban[x])
        {
            printf("Jawaban kamu benar!\n");
            score++;
        }
        else
        {
            printf("Jawaban kamu salah!\n");
        }
    }

    printf("\nSkor kamu = %d/%d ", score, nomerpertanyaan);
                           
 return 0;
}

#include <stdio.h>
#include <string.h>

struct Player
{
    char nama[15];
    int score;
};

int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.nama, "Vier");
    player1.score = 4;

    strcpy(player2.nama, "Vano");
    player2.score = 5;

    printf("%s", player1.nama);
    printf(" = %d ", player1.score);
    
    printf("\n%s", player2.nama);
    printf(" = %d ", player2.score);

 return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

    char mobil[][15] = {"Tesla","Supra","RX-7"};
    strcpy(mobil[0], "M3 GTR");

    for(int x = 0; x < sizeof(mobil)/sizeof(mobil[0]); x++)
    {
        printf("%s\n", mobil[x]);
    }     
 
 return 0;
}
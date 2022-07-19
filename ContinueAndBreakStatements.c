#include <stdio.h>

int main(){

    // Contoh Continue

    for(int x = 1; x <= 20; x++)
    {
        if(x == 13)
        {
            continue;
        }
        printf("%d\n", x);
    }

    printf("\n"); 
    
    // Contoh Break

    /*for(int x = 1; x <= 20; x++)
    {
        if(x == 13)
        {
            break;
        }
        printf("%d\n", x);
    }*/

 return 0;
}
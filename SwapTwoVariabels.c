#include <stdio.h>
#include <string.h>

int main(){

    char x[10] = "Soda";
    char y[10] = "Sprite";
    char z[10];

    strcpy(z, x);
    strcpy(x, y);
    strcpy(y, z);

   printf("X = %s\n", x);
   printf("Y = %s\n", y);
 
 return 0;
}
#include <stdio.h>

int main(){

    /*
    & = AND
    | = OR
    ^ XOR
    << Left Shift
    >> Right Shift
    */
   int x = 6;
   int y = 12;
   int z = 0;
   
   z = x & y;
   printf("AND = %d\n", z);

   z = x | y;
   printf("OR = %d\n", z);

   z = x ^ y;
   printf("XOR = %d\n", z);

   z = x << 1;
   printf("Left Shift = %d\n", z);

   z = x >> 1;
   printf("Right Shift = %d\n", z);
 
 return 0;
}
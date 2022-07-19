#include <stdio.h>

int main(){

    /*int angka[2][3] = {
                       {1, 2, 3},
                       {4, 5, 6}
                        };*/
    
   int angka[3][3];

   int rows = sizeof(angka)/sizeof(angka[0]);
   int columns = sizeof(angka[0])/sizeof(angka[0][0]);
   
   printf("rows = %d\n", rows);
   printf("columns = %d\n", columns);

   angka[0][0] = 1;
   angka[0][1] = 2;
   angka[0][2] = 3;
   angka[1][0] = 4;
   angka[1][1] = 5;
   angka[1][2] = 6;
   angka[2][0] = 7;
   angka[2][1] = 8;
   angka[2][2] = 9;

   for(int x = 0; x < rows; x++)
   {
        for(int v = 0; v < columns; v++)
        {
            printf("%d\t", angka[x][v]);
        }
        printf("\n");
   }
     
 return 0;
}
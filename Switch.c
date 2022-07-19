#include <stdio.h>

int main(){

   char nilai;

   printf("\nMasukkan nilai bhs.inggris kamu : ");
   scanf("%c", &nilai);

   switch(nilai){
       case 'A':
       printf("Perfect! ");
       break;
       case 'B':
       printf("Excellent! ");
       break;
       case 'C':
       printf("Good! ");
       break;
       case 'D':
       printf("Belajar lagi yah:) ");
       break;
       case 'F':
       printf("Kamu gagal:( ");
       break;
       default:
       printf("\nHarap masukkan nilai yang valid ");
   }

  return 0;
}
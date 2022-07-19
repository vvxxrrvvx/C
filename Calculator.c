#include <stdio.h>

int main(){

  char operator;
  double angka1;
  double angka2;
  double hasil;

  printf("\nMasukkan operator ( + - * / ) : ");
  scanf("%c", &operator);

  printf("Masukkan angka 1 : ");
  scanf("%lf", &angka1);

  printf("Masukkan angka 2 : ");
  scanf("%lf", &angka2);

  switch(operator){
    case '+':
     hasil = angka1 + angka2;
     printf("\nHasil = %.1lf ", hasil);
     break;
    case '-':
     hasil = angka1 - angka2;
     printf("\nHasil = %.1lf ", hasil);
     break;
    case '*':
     hasil = angka1 * angka2;
     printf("\nHasil = %.1lf ", hasil);
     break;
    case '/':
     hasil = angka1 / angka2;
     printf("\nHasil = %.1lf ", hasil);
     break;
    default:
    printf("\nHarap masukkan satuan yang valid ", operator);
  }

 return 0;
}
#include <stdio.h>

double square(double x){

    //double hasil = x * x;
    //return hasil;

    // cara singkat nya

    return x * x;
}

int main(){

  double x = square(5.5);
  printf("%.2lf", x);

 return 0;
}
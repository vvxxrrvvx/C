#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double r;
    double lingkaran;
    double area;
    
    printf("\nMasukkan jari-jari sebuah lingkaran : ");
    scanf("%lf", &r);

    lingkaran = 2 * PI *r;
    area = PI * r * r;

    printf("\nLingkaran : %lf", lingkaran);
    printf("\narea : %lf ", area);
  
 return 0;
}
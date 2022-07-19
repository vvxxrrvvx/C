#include <stdio.h>

int main(){

    double harga[] = {5.000, 7.500, 10.000, 15.000, 20.000};

    //printf("%d bytes\n", sizeof(harga));

    for(int x = 0; x < sizeof(harga)/sizeof(harga[0]); x++){
        printf("\nRp%.3lf ", harga[x]);
    }
     
 return 0;
}
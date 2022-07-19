#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(0));
    int angka1 = (rand() % 10) + 1;
    int angka2 = (rand() % 10) + 1;
    int angka3 = (rand() % 10) + 1;

    printf("%d\n", angka1);
    printf("%d\n", angka2);
    printf("%d\n", angka3);

 return 0;
}
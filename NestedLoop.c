#include <stdio.h>

int main(){

    int rows;
    int columns;
    char symbol;
    
    printf("Masukkan jumlah rows : ");
    scanf("%d", &rows);

    printf("Masukkan jumlah columns : ");
    scanf("%d", &columns);

    scanf("%c");

    printf("Masukkan symbol untuk digunakan : ");
    scanf("%c", &symbol);

    for(int x = 1; x <= rows; x++)
    {
        for(int v = 1; v <= columns; v++){
            printf("%c", symbol);
        }
        printf("\n");
    }

 return 0;
}
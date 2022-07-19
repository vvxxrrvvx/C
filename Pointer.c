#include <stdio.h>

void printUmur(int umur)
{
    printf("Hello Vier kamu berumur %d tahun \n", umur); 
}

int main()
{

    const int umur = 19;
    const int *pUmur = &umur;

    printf("Alamat dari umur = %p \n", &umur);
    printf("Alamat dari pUmur = %p \n", pUmur);

    printf("Ukuran dari umur = %d bytes\n", sizeof(umur));
    printf("Ukuran dari pUmur = %d bytes\n", sizeof(pUmur));

    printf("Value dari umur = %d \n", umur);
    printf("Value dari alamat yang ditambahkan = %d \n", &pUmur);

    printUmur(umur);

 return 0;
}
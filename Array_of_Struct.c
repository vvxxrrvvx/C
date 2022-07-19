#include <stdio.h>
#include <string.h>

struct Murid
{
    char nama[15];
    float nilai;
};

int main()
{

    struct Murid murid1 = {"Oby", 75.5};
    struct Murid murid2 = {"Bella", 95.5};
    struct Murid murid3 = {"Ara", 80.0};
    struct Murid murid4 = {"Dolby", 99.9};

    struct Murid kelas1[] = {murid1, murid2, murid3, murid4};

    for(int x = 0; x < sizeof(kelas1)/sizeof(kelas1[0]); x++)
    {
        printf("Nilai %-5s", kelas1[x].nama);
        printf(" = %.1f\n", kelas1[x].nilai);
    }
  
 return 0;
}
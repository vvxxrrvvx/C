#include <stdio.h>

void sort(char array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        for(int v = 0; v < size - x - 1; v++)
        {
            if(array[v] < array[v+1])
            {
                int z = array[v];
                array[v] = array[v+1];
                array[v+1] = z;
            }
        }
    }
}

void printArray(char array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        printf("%-12c", array[x]);
    }
}

int main(){

    char array[] = {'G', 'A', 'F', 'C', 'E', 'B', 'D', 'H', 'K', 'Q', 'I', 'N', 'J',
                    'L', 'P', 'M', 'O', 'V', 'S', 'Z', 'R', 'W', 'T', 'U', 'X', 'Y'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
  
 return 0;
}
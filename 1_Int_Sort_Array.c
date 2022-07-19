#include <stdio.h>

void sort(int array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        for(int v = 0; v < size - x - 1; v++) 
        { // kalau ingin mengubah urutan angka nya dari 20 ke 1 tinggal mengubah arah > menjadi <
            if(array[v] < array[v+1]) // <<<<<<<<<<
            {        
                int z = array[v];
                array[v] = array[v+1];
                array[v+1] = z;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for(int x = 0; x < size; x++)
    {
        printf("%d ", array[x]);
    }
}

int main(){

    int array[] = {9, 1, 3, 6, 2, 
                   5, 8, 4, 7, 10, 
                  15, 19, 11, 20, 16, 
                  12, 18, 13, 14, 17};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    printArray(array, size);
 

 return 0;
}
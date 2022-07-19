#include <stdio.h>

int findmax(int x, int y){

    //if(x > y){
        //return x;
   // }
    //else{
        //return y;
   // }

   return (x > y) ? x : y;
}

int main(){

    int max = findmax(3, 4);
    printf("%d", max);

 return 0;
}
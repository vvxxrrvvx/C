#include <stdio.h>

void v(char nama[], int umur){
  
  printf("\nHello %s", nama);
  printf("\nKamu berumur %d tahun ", umur);

}
int main(){

    char nama[] = "Vier";
    int umur = 19;
    
    v(nama, umur);

 return 0;
}
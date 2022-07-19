#include <stdio.h>
#include <stdbool.h>

int main(){

  // Logical Operator : && (and) | Check jika dua kondisi atau lebih = True
  
           // CONTOH Logical Operator &&(and)

  //float suhu;
  bool sunny = true;
  
  /*printf("Berapa derajat suhu cuaca hhari ini : ");
  scanf("%lf", &suhu);

  if(suhu >= 23 && suhu <= 29 && sunny){
    printf("\nCuaca hari ini bagus! ");
  }
  else if(suhu >= 30.0 && suhu <= 35.0){
    printf("Cuaca hari ini sangat panas:/ ");
    printf("Tetap dirumah plz");
  }
  else{
    printf("Cuaca hari ini kurang bagus:( ");
  }
 */
             // CONTOH Logical Operator !(not/tidak=false)
  
  if(sunny == true){ 
    printf("\nCuaca hari ini cerah"); // <
  }// Jika operator !(not) nya dihilangkan maka akan mengeksekusi blok pernyataan if ( if statements)
  else{
    printf("\nCuaca hari ini mendung"); // <
  }// Kalau menggunakan operator !(not) maka akan mengeksekusi blok pernnyataan else


  


 return 0;
}
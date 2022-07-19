#include <stdio.h>
#include <ctype.h>

int main(){

   char satuan;
   float temperature;

   printf("\nMasukkan temperature dalam satuan (F) atau (C) : ");
   scanf("%c", &satuan);

   satuan = toupper(satuan);

   if(satuan == 'C')
   {
     printf("\nMasukkan temperature dalam Celcius : ");
     scanf("%f", &temperature);
     temperature = (temperature * 9 / 5) + 32;
     printf("\nTemperature suhu dalam Fahrenheit = %.1f ", temperature);
   }
   else if(satuan == 'F')
   {
     printf("\nMasukkan temperature dalam Fahrenheit : ");
     scanf("%f", &temperature);
     temperature = ((temperature - 32) * 5) / 9;
     printf("\nTemperature suhu dalam Celcius = %.1f ", temperature);
   }
   else
   {
     printf("Harap masukkan satuan yang valid ", satuan);
   }

 return 0;
}
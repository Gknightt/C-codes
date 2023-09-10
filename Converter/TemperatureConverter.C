#include <stdio.h>
#include <stdlib.h>


 //Function Prototyping
float CelsiusToKelvin(float x, float kelv);
void KelvinToCelsius();
void FarenheitToKelvin();
void KelvinToFarenheit();
void FarenheitToCelsius();
void CelsiusToFarenheit();



int main (){
int convert;
float converted;
float before,after;

printf("1. Celsius to Kelvin\n");
printf("2. Kelvin to Celsius\n");
printf("3. Farenheit to Kelvin\n");
printf("4. Kelvin to Farenheit\n");
printf("5. Farenheit to Celsius\n");
printf("6. Celsius to Farenheit\n\n");


printf("Choose a converter(1-6):\n");
scanf("%d", &convert);

switch (convert)
{
case 1:
   system("cls");
  converted = CelsiusToKelvin( before,after);
    printf("\n\nThe kelvin conversion is: %.2f",converted);
  printf("K");
    break;

case 2:
   system("cls");
   printf("2. Celsius to Kelvin\n");
    break;

case 3:
   system("cls");
   printf("3. Celsius to Kelvin\n");
    break;    

case 4:
   system("cls");
   printf("4. Celsius to Kelvin\n");
    break;

case 5:
   system("cls");
   printf("5. Celsius to Kelvin\n");
    break;

case 6:
    system("cls");
   printf("6. Celsius to Kelvin\n");
    break;        

default:
    system("cls");
    printf("Invalid input!\n\n");
    return main();
    
}
    return 0;
}


float CelsiusToKelvin(float x,float kelv){ 
    printf("Enter the Celsius: ");
    scanf("%f",&x);
   return kelv = x + 273.15;
 
}

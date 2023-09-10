#include <stdio.h> 
 #include <stdlib.h> 
  
  
  //Function Prototyping 
 float CelsiusToKelvin(float x, float kelv); 
 float KelvinToCelsius(float x, float Cels); 
 float FahrenheitToKelvin(float x, float kelv); 
 float KelvinToFahrenheit(float x, float fahr); 
 float FahrenheitToCelsius(float x, float cels); 
 float CelsiusToFahrenheit(float x, float fahr); 
  
  
  
 int main (){ 
 char choice;
 int convert; 
 float converted; 
 float before,after; 
 
 
  system("cls"); 
  
 printf("1. Celsius to Kelvin\n"); 
 printf("2. Kelvin to Celsius\n"); 
 printf("3. Fahrenheit to Kelvin\n"); 
 printf("4. Kelvin to Fahrenheit\n"); 
 printf("5. Fahrenheit to Celsius\n"); 
 printf("6. Celsius to Fahrenheit\n\n"); 
  
  
 printf("Choose a converter(1-6):\n"); 
 scanf("%d", &convert); 
  
 switch (convert) 
 { 
 case 1: 
    system("cls"); 
   converted = CelsiusToKelvin( before,after); 
     printf("\n\nThe kelvin conversion is: %.2f",converted); 
   printf("K"); 
   
   //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
     break; 
  
 case 2: 
    system("cls"); 
    converted = KelvinToCelsius( before,after); 
     printf("\n\nThe Degree Celsius conversion is: %.2f",converted); 
   printf("°C"); 
   
 //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
     break; 
  
 case 3: 
    system("cls"); 
    converted = FahrenheitToKelvin( before,after); 
     printf("\n\nThe Kelvin conversion is: %.2f",converted); 
   printf("K"); 
   
    //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
     break;     
  
 case 4: 
    system("cls"); 
    converted = KelvinToFahrenheit( before,after); 
     printf("\n\nThe Fahrenheit conversion is: %.2f",converted); 
   printf("°F"); 
   //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
     break; 
  
 case 5: 
    system("cls"); 
    converted = FahrenheitToCelsius( before,after); 
     printf("\n\nThe Celsius conversion is: %.2f",converted); 
   printf("°C"); 
 //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
     break; 
  
 case 6: 
     system("cls"); 
    converted = CelsiusToFahrenheit( before,after); 
     printf("\n\nThe Fahrenheit conversion is: %.2f",converted); 
   printf("°F"); 
   
   //loop
      printf("\n\n Do you want to try again?\n press Y for yes and N for no:"); 
    scanf(" %c",&choice); 
  
    if(choice=='Y' || choice=='y'){ 
    return main(); 
    } 
  
     if(choice=='N' || choice=='n'){ 
    printf("\n\nThank you for using my temperature converter!");
       return 0; 
    }
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
 
 float KelvinToCelsius(float x,float Cels){
printf("Enter the Kelvin: "); 
     scanf("%f",&x); 
    return Cels = x - 273.15; 
 }
 
 float FahrenheitToKelvin(float x,float kelv){
printf("Enter the Fahrenheit: "); 
     scanf("%f",&x); 
    return kelv = (x -32)*5/9+273.15; 
 }
 
 float KelvinToFahrenheit(float x,float fahr){
printf("Enter the Kelvin: "); 
     scanf("%f",&x); 
    return fahr = (x -273.15)* 9/5+ 32; 
 }
 
 float FahrenheitToCelsius(float x,float cels){
printf("Enter the Fahrenheit: "); 
     scanf("%f",&x); 
    return cels = (x -32)*5/9; 
 }
 
 float CelsiusToFahrenheit(float x,float fahr){
printf("Enter the Celsius: "); 
     scanf("%f",&x); 
    return fahr = (x *9/5)+32; 
 }
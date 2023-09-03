#include<stdio.h>

#include<conio.h>

int x[32],i=0,inte,j;

main(){

//input integer

printf("Enter an integer value: ");

scanf("%d", &inte);

printf("\nThe binary value is: ");

//if statement if the input is 0

if (inte==0){

printf("0");

}

//if positive input

if (inte>0){

for (;inte>0;i++)

{

x[i]=inte%2;

inte/=2;

}

for (j = i-1; j >= 0; j--)

printf("%d ", x[j]);}

//if negative input

else if (inte<0){

printf("-");

for (;inte<0;i++)

{

x[i]=(inte%2)*-1;

inte/=2;

}

for (j = i-1; j >= 0; j--)

printf("%d ", x[j]);

}

return 0;
}
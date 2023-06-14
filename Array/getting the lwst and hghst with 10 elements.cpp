#include<stdio.h>

#include<conio.h>

int x[10],i,noex,temp;

main(){

// input an array value

for(i=0;i<10;i++){

printf("Enter a value for x: ");

scanf("%d", &x[i]);}

//sorting the value of array using bubble sort

do

{ noex =0;

for(i=0;i<9;i++)

{if (x[i]>x[i+1])

//SWITCHING

{ temp= x[i];

x[i] = x[i+1];

x[i+1]= temp;

noex=1;

}

}

}

while (noex);

//printing highest and lowest array

printf("\n\nThe lowest value is: %d ", x[0]);

printf("\n\nThe highest value is: %d ", x[9]);

getch();

return 0;

}

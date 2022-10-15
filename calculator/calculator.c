#include <stdio.h>

int main() {
  int num1, num2,what;
  printf("Enter first integer number: ");
    scanf("%d", &num1);
 
 printf("Enter second integer number: ");
    scanf("%d", &num2);
    printf("Enter the number if you want it to: \n");
    printf("1 multiply \n");
    printf("2 divide \n");
    printf("3 subtract \n");
    printf("4 add \n");
    scanf("%d", &what);
    if (what==1) {
        printf("the factor   is  %d.\n", num1*num2);
    }
    
    if (what==2) {
        printf("the quotient  is  %d.\n", num1/num2);
    }
    
    if (what==3) {
        printf("the difference is  %d.\n", num1-num2);
    }
    
    if (what==4) {
        printf("the sum is  %d.\n", num1+num2);
    }
    
    return 0;
}

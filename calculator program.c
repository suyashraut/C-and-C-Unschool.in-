#include <stdio.h>

int main()
{

    float num1,num2,add,subtract,multiply,divide ;
    printf("Enter the first number :- ");
    scanf("%f",&num1);
    printf("Enter the second number :- " );
    scanf("%f",&num2);
    add=num1+num2;
    subtract=num1-num2;
    multiply=num1*num2;
    divide=num1/num2;
    printf("\n\n\nThe Sum of %f and %f is %f \n",num1,num2,add);
    printf("The Difference of %f and %f is %f\n",num1,num2,subtract);
    printf("The Multiplication of %f and %f is %f \n",num1,num2,multiply);
    printf("The Division of %f and %f is %f \n",num1,num2,divide);
    return 0;


}

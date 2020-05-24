//c program to keep adding numbers inserted by user until user enters zero(0) as input(using do while loop)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,sum=0;
    do
    {
        printf("Enter number:- ");
        scanf("%d",&num);
        sum = sum+num;
    }
    while(num!=0);
    printf("\nThe sum is %d ",sum);
    return 0;
}

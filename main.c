#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum;
    printf("Enter three numbers(seperated by spaces):- ");
    scanf("%d %d %d",&a,&b,&c);
    sum=(a+b+c);
    printf("Sum of %d+%d+%d is %d ",a,b,c,sum);
    return 0;
}

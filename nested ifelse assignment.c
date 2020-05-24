//C program to assign grades for input percentage80.
//Program by Suyash Raut
#include<stdio.h>
int main()
{
    float per=0;
    printf("Enter your percentage:- ");
    scanf("%f",&per);
    if(per>=80)
    {
        printf("A grade");
    }
    else
    {
        if(per<80 && per>=70)
        {
            printf("B grade");
        }
        else
        {
            if(per<70 && per>=60)
            {
                printf("C grade");
            }
            else
            {
                if(per<60 && per>=40)
                {
                    printf("D grade");
                }
                else
                {
                    printf("FAIL");
                }
            }
        }
    }
    return 0;
}

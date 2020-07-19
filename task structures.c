#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[50],ID[50];
    int experience;
    float salary;
};
int main()
{
    int i=0;
    struct employee emp[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter name of employee %d :- ",(i+1));
        fflush(stdin);
        gets(emp[i].name);
        printf("Enter ID of employee %d :- ",i+1);
        fflush(stdin);
        gets(emp[i].ID);
        printf("Enter experience of employee %d :- ",i+1);
        fflush(stdin);
        scanf("%d",&emp[i].experience);
        printf("Enter  the  salary  of employee %d :- ",i+1);
        fflush(stdin);
        scanf("%f",&emp[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nName of employee %d :- %s",i+1,emp[i].name);
        printf("\nID of employee %d :- %s",i+1,emp[i].ID);
        printf("\nExperience of employee %d :- %d",i+1,emp[i].experience);
        printf("\nSalary of employee %d :- %f\n",i+1,emp[i].salary);
    }
    return 0;
}


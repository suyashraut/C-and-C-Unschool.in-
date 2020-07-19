#include <stdio.h>
#include <string.h>
#include<math.h>

int main()
{
     char a[]="abcd",b[]="abcd";
     int c , random;
     double value1=81,result,value2=1.6;
     printf("strcmp(a,b) = %d ",strcmp(a,b));
     strcpy(a,"hello");
     printf("\na = %s",a);
     printf("\nstrrev(a)= %s",strrev(a));
     printf("\nLength of b = %d ",strlen(b));
     printf("\nstrupr(b) = %s",strupr(b));
     printf("\nstrlwr(b) = %s",strlwr(b));
     c=pow(10,4);
     printf("\npow(10,4) = %d ",c );
     result=sqrt(value1);
     printf("\nsqrt(81) = %f ",result);
     printf("\nceil(1.6) = %f ",ceil(value2));
     printf("\nfloor(1.6) = %f ",floor(value2));
     srand(time(0));
     random = rand() % 6 + 1;
     printf("\nrand() for a dice= %d",random);


     return 0;
}

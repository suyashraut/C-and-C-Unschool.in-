//Course :- C&C++ -Minor Project- Project-2-SIMPLE FOOD ORDERING SYSTEM- made by Suyash Manohar Raut
//unschool.clanguage
#include <stdio.h>
#include <stdlib.h>

int Burger(int a,int b);//Burger function declaration to count price of quantity ordered and add to the total price
int ChickenPizza(int a,int b);
int FriedChicken(int a,int b);
int GrilledChicken(int a,char b);
int Noodles(int a,char b);
int Pasta(int a,char b);
int Oreoshake(int a);
int Coldcoffee(int a);
int Cappuccino(int a);
int Coke(int a,int b);

int main()
{
    char name[40],again;
    char anything_else,size_char,no_order;
    int i=1, choice,code,items,Totalprice=0,order_number=1000,order_taken=0,order_served=0,Currently_preparing=0,size,quantity,itemcode;
    printf("\t\t\t---Welcome to Cafe Venus---\t\t\t");
    label4 :printf("\n1)Order \n2)Serve \n3)Display \n4)Exit the program\nSelect:- ");
    scanf("%d",&choice);
    if(choice>4)
    {
        printf("\nInvalid selection .Please select again. ");
        goto label4;
    }
    switch(choice)
    {
        case 1:
            printf("\nPlease enter your name :- ");
            fflush(stdin);
            gets(name);
            printf("...................................MENU...................................\n");
            printf("[Item code#]\t [Description] \t\t\t [Size] \t\t [Price(Rs)]");
            printf("\n[11]\t\t Burger \t\t\t 200/100gm \t\t 230/180 ");
            printf("\n[12]\t\t Chicken Pizza \t\t\t 12/14/16inch \t\t 750/975/1250");
            printf("\n[13]\t\t Fried Chicken \t\t\t 1/4/10 pcs \t\t 185/320/790");
            printf("\n[14]\t\t Grilled Chicken \t\t quarter/half/full \t 80/150/200");
            printf("\n[15]\t\t Noodles \t\t\t half/full \t\t 50/80");
            printf("\n[16]\t\t Pasta \t\t\t\t half/full \t\t 40/70");
            printf("\n[17]\t\t Oreo Shake \t\t\t 250mg \t\t\t 150");
            printf("\n[18]\t\t Cold Coffee \t\t\t 250mg \t\t\t 60");
            printf("\n[19]\t\t Cappuccino \t\t\t 250mg \t\t\t 70");
            printf("\n[20]\t\t Coke \t\t\t\t 250/500mg \t\t 20/30");
            label15 :printf("\n\nHow many items you want to order :- ");
            scanf("%d",&items);
            if(items==0)
            {
                printf("\nYou don't wanna order anything (y/n)? :- ");
                scanf(" %c",&no_order);
                switch(no_order)
                {
                case 'y':
                case 'Y':
                    goto label15;
                case 'n':
                case 'N':
                    goto label4;

                }
            }
            label2 :printf("\nPlease enter No.%d item code :- ",i);
            scanf("%d",&code);
            if(code<11 || code>20)
            {
                printf("Invalid Input \n");
                goto label2;
            }
            switch(code)
            {
                case 11 : printf("Burger");
                label1 :printf("\nSelect size (in gm):- ");
                scanf("%d",&size);
                if(size==200)
                {
                    printf("200mg Burger .");
                }
                else if(size==100)
                {
                    printf("100mg Burger .");
                }
                else
                {
                    printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label1;
                }
                printf("Please enter the quantity :-  ");
                scanf("%d",&quantity);
                Totalprice=Totalprice+Burger(quantity,size);
                label5 :if(i!=items)
                {
                    i++;
                    goto label2 ;

                }
                label3 :printf("\nDo you want to order anything else?(y/n) :- ");
                fflush(stdin);
                scanf(" %c",&anything_else);
                switch(anything_else)
                {
                case 'y':
                case 'Y':
                    i++;
                    items++;
                    goto label2;
                    break;

                case 'n':
                case 'N':
                    break;

                }
                break;



                case 12 : printf("Chicken Pizza ");
                label6:printf("\nSelect size (in inch):- ");
                scanf("%d",&size);
                if(size==12)
                {
                    printf("12inch Chicken Pizza .");
                }
                else if(size==14)
                {
                    printf("14inch Chicken Pizza .");
                }
                else if(size==16)
                {
                    printf("16inch Chicken Pizza .");
                }
                else
                {
                    printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label6;
                }
                printf("Please enter the quantity :-  ");
                scanf("%d",&quantity);
                Totalprice=Totalprice+ChickenPizza(quantity,size);
                goto label5;


                case 13 : printf("Fried Chicken ");
                label7:printf("\nSelect size (in pcs):- ");
                scanf("%d",&size);
                if(size==1)
                {
                    printf("1 pc Fried Chicken .");
                }
                else if(size==4)
                {
                    printf("4 pcs Fried Chicken .");
                }
                else if(size==10)
                {
                    printf("10 pcs Fried Chicken .");
                }
                else
                {
                    printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label7;
                }
                printf("Please enter the quantity :-  ");
                scanf("%d",&quantity);
                Totalprice=Totalprice+FriedChicken(quantity,size);
                goto label5;

                case 14 : printf("Grilled Chicken ");
                label8:printf("\nSelect size :- ");
                scanf(" %c",&size_char);
                switch(size_char)
                {
                case 'q':
                case 'Q':
                    printf("Quarter Grilled Chicken .");
                    break;
                case 'h':
                case 'H':
                    printf("Half Grilled Chicken .");
                    break;
                case 'f':
                case 'F':
                    printf("Full Grilled Chicken .");
                    break;
                default :printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label8;
                }
                printf("Please enter the quantity :-  ");
                fflush(stdin);
                scanf("%d",&quantity);
                Totalprice=Totalprice+GrilledChicken(quantity,size_char);
                goto label5;



                case 15 : printf("Noodles ");
                label9:printf("\nSelect size :- ");
                scanf(" %c",&size_char);
                switch(size_char)
                {
                case 'h':
                case 'H':
                    printf("Half Noodles .");
                    break;
                case 'f':
                case 'F':
                    printf("Full Noodles .");
                    break;
                default :printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label9;
                }
                printf("Please enter the quantity :-  ");
                fflush(stdin);
                scanf("%d",&quantity);
                Totalprice=Totalprice+Noodles(quantity,size_char);
                goto label5;

                case 16 : printf("Pasta ");
                label10:printf("\nSelect size :- ");
                scanf(" %c",&size_char);
                switch(size_char)
                {
                case 'h':
                case 'H':
                    printf("Half Pasta .");
                    break;
                case 'f':
                case 'F':
                    printf("Full Pasta .");
                    break;
                default :printf("\nSize Not Available .");
                    printf("\nPlease enter the size from the given menu again");
                    goto label10;
                }
                printf("Please enter the quantity :-  ");
                fflush(stdin);
                scanf("%d",&quantity);
                Totalprice=Totalprice+Pasta(quantity,size_char);
                goto label5;



                case 17: printf("Oreo Shake 250mg .");
                         printf("Please enter the quantity :-");
                         scanf("%d",&quantity);
                         Totalprice=Totalprice+Oreoshake(quantity);
                         goto label5;
                case 18 : printf("Cold Coffee 250mg.");
                          printf("Please enter the quantity :- ");
                         scanf("%d",&quantity);
                         Totalprice=Totalprice+Coldcoffee(quantity);
                         goto label5;

                case 19 : printf("Cappuccino 250 mg .");
                          printf("Please enter the quantity :- ");
                         scanf("%d",&quantity);
                         Totalprice=Totalprice+Cappuccino(quantity);
                         goto label5;

                case 20 : printf("Coke");
                          label11 :printf("\nSelect size (in gm):- ");
                          scanf("%d",&size);
                           if(size==250)
                              {
                                  printf("250mg Coke .");
                              }
                           else if(size==500)
                              {
                                 printf("500mg Coke .");
                               }
                            else
                              {
                                 printf("\nSize Not Available .");
                                 printf("\nPlease enter the size from the given menu again");
                                 goto label11;
                              }
                printf("Please enter the quantity :-  ");
                scanf("%d",&quantity);
                Totalprice=Totalprice+Coke(quantity,size);
                goto label5;


            }



            printf("\n\nNumber of food ordered now = %d \n",items);
            printf("\nThank you %s for your order . Your Total Bill to be paid is %d /Rs-",name,Totalprice);
            printf("\nPlease wait while we prepare the food.\n ");
            order_taken++;
            i=1;
            goto label4 ;


       case 2 :if((order_taken-order_served)==0)
                  {
                      printf("\nNo remaining orders .For ordering more please press 1 .\nThank You!!!\n");
                      goto label4;
                  }
                  else
                  {
                      printf("\n\nOrder no.%d for %s is ready!\nEnjoy your meal :) \n",++order_number,name);
                      order_served++;
                  }


               goto label4;
       case 3:printf("\nTotal Order Taken :- %d",order_taken);
              printf("\nTotal Order Served :- %d",order_served);
              printf("\nNumber of currently waiting to be served = %d\n",order_taken-order_served);
              if(order_taken-order_served !=0)
              {
                  Currently_preparing=1000+(order_served+1);
                  printf("\nCurrently preparing for food no.%d\n",Currently_preparing);
              }
              goto label4;
      case 4: printf("\n\n\t\t\tThank You For Coming !!!\n\t\t\tPlease Visit Again.\n\n\n");
              break;

    }

return 0;
}


int Burger(int a,int b)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        if(b==200)
        {
           T = T+230;
        }
        else
        {
            T = T+180;
        }


    }
   return T;
}

int ChickenPizza(int a,int b)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        if(b==12)
        {
            T=T+750;
        }
        else if(b==14)
        {
            T=T+975;
        }
        else
        {
            T=T+1250;
        }
    }
    return T;

}

int FriedChicken(int a,int b)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        if(b==1)
        {
            T=T+185;
        }
        else if(b==4)
        {
            T=T+320;
        }
        else
        {
            T=T+790;
        }
    }
    return T;

}

int Oreoshake(int a)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        T=T+150;
    }
    return T;
}

int Coldcoffee(int a)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        T=T+60;
    }
    return T;
}

int Cappuccino(int a)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        T=T+70;
    }
    return T;
}

int Coke(int a,int b)
{
    int T=0,i=0;
    for(i=0;i<a;i++)
    {
        if(b==250)
        {
           T = T+20;
        }
        else
        {
            T = T+30;
        }


    }
   return T;
}

int GrilledChicken(int a,char b)
{
    int T=0,i=0,c;
    c=b;
    for(i=0;i<a;i++)
    {
        if(c==113  || c==81)
    {
        T=T+80;

    }
    else if(c==104  || c==72)
    {
        T=T+150;
    }
    else if(c==102 || c==70)
    {
        T=T+200;
    }
    }


    return T;

}

int Noodles(int a,char b)
{
    int T=0,i=0,c;
    c=b;
    for(i=0;i<a;i++)
    {
        if(c==104  || c==72)
    {
        T=T+50;

    }
    else if(c==102  || c==70)
    {
        T=T+80;
    }
    }

    return T;
}


int Pasta(int a,char b)
{
    int T=0,i=0,c;
    c=b;
    for(i=0;i<a;i++)
    {
            if(c==104  || c==72)
    {
        T=T+40;

    }
    else if(c==102  || c==70)
    {
        T=T+70;
    }

    }

    return T;
}



//Please NOTE
//The pin number is = 9623 to get access to the user account
#include <iostream>
using namespace std;

class Account
{
private:
    int x;
    double balance;
public:
    Account() //Initializing Pin=9623 and Balance=1000 Rs/-
    {
        x=9623;
        balance=1000;
    }
    int get()
    {
        return x;
    }
    double blc()  //Balance Function
    {
        return balance;
    }
    int wth(double w) //Withdraw Function
    {
        if(w<=balance)
        {
            balance=balance-w;
            cout<<"\nPlease collect your cash";
            cout<<"\nYour available balance is "<<balance<<" Rs/-";
        }
        else
        {
            cout<<"\nYou don't have sufficient balance to withdraw "<<w<<" Rs/-";
        }
    }
    int dep(double d)
    {
        balance=balance+d;
        cout<<"\nThank you for depositing, your new balance is "<<balance<<" Rs/-";
    }

};

int main()
{
    Account user;
    int pin,choice1,choice2;
    double withdraw,deposit;
    cout<<"******--- Welcome To Your Bank ---******"<<endl;
    cout<<"\nEnter Your Pin Number Please :- ";
    cin>>pin;
    if(pin==user.get()) //If pin is Correct
    {
       again :system ("CLS");
       cout<<"\nEnter Any Option To Be Served\n\n1.Balance Enquiry\n2.Cash Withdraw\n3.Deposit Cash\n4.Exit\nEnter Your Choice: ";
       cin>>choice1;
       switch(choice1)
       {
           case 1: cout<<"\nYour bank balance is "<<user.blc()<<" Rs/-"; //balance
                   break;
           case 2: cout<<"\nPlease enter the amount to withdraw :- "; //withdraw
                   cin>>withdraw;
                   user.wth(withdraw);
                   break;
           case 3: cout<<"\nPlease enter the amount to deposit :- "; //deposit
                   cin>>deposit;
                   user.dep(deposit);
                   break;
           case 4: cout<<"\nThank you for banking with us, have a nice day !!!"; //exit
                   goto last;
           default: cout<<"\nInvalid Selection , Select again";
                   goto again;
       }
       cout<<"\nDo you want to perform another transaction ?\nPress 1 to proceed and 2 to exit\nEnter your choice : ";
       cin>>choice2;
       if(choice2==1)
       {
           goto again;
       }
       else if(choice2==2)
       {
           cout<<"\nThank you for banking with us, have a nice day!!!";
       }


    }
    else  //If pin is Incorrect
    {
        cout<<"Wrong Pin";
    }
    last :return 0;
}

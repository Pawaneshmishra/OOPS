/*Pawanesh Mishra 191921
WAP for Account Class*/

#include<bits/stdc++.h>
using namespace std;

class Account                                                       //Making Class
{
    int AC;
    char NAME[100];
    float BAL;

public:

    Account(char *name, int ac_num, float balance)

       {
        strcpy(NAME,name);                                        //Constructor
        AC=ac_num;
        BAL=balance;
        }



    void deposit()                                               //Deposit Function
    {
        int d;
        cout<<"\nEnter deposit amount : ";
        cin>>d;
        BAL += d;
        cout<<"\nYour new balance is : "<<BAL<<endl;
    }

    void withdraw()                                             //Withdraw Function
    {
        int w;
        cout<<"\nEnter money is withdraw : ";
        cin>>w;
        if(w>BAL) cout<<"Insufficient Balance!\n";
        else
        {
            BAL -= w;
            cout<<"New balance is : ";
            cout<<BAL<<endl;
        }
    }

    void calculate_interest()                                    //Interest Function
    {
        float t,r=4,ci;
        cout<<"You will get 4% p.a.";
        cout<<"\nEnter the time to calculate interest : ";
        cin>>t;
        ci=BAL*pow((1+r/100),t);
        cout<<ci<<endl;
    }

};

int main()                                                          //Main Function
{
    int ac_num,choice;
    char name[100];
    float balance;

    cout<<"Enter your Name : ";
    cin>>name;
    cout<<"--*--*--*--*--";

    ac_num=(rand()% 9000000 + 1000000);                           //Generating acc. and balance
    balance=rand();

    cout<<"\nYour account number is : "<<ac_num;
    cout<<"\nYour balance is : "<<balance;
    cout<<"\n--*--*--*--*--";

    Account a1(name,ac_num,balance);                              //Creating Object

   while(1)                                                       //Switch Case
   {
    cout<<"\n1. Deposit Money\n"<<"2. Withdraw Money\n"<<"3. Calculate Interest\n"<<"4. Exit\n";
    cout<<"Enter your choice : \n";
    cin>>choice;

    switch(choice)
    {
    case 1:
        a1.deposit();
        break;

    case 2:
        a1.withdraw();
        break;

    case 3:
        a1.calculate_interest();
        break;

    case 4:
        exit(1);

    default:
        cout<<"Error! value not accepted";
    }
   }

   return 0;
}

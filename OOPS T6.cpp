/*WAP for String Class*/

#include<bits/stdc++.h>
using namespace std;

class STRINGS                                              //Class String
{
    char STR[100];

    public:                                                //Constructor
        STRINGS(char str[100])
        {
          strcpy(STR,str);
        }

    void store_string(char str[100])                       //Store Function
    {
        strcpy(STR,str);
        cout<<"String is stored successfully!\n";
    }

    void add_string(char s[100])                           //Concatenate String
    {
        strcat(STR,s);
        cout<<"\nString is concatenated successfully!\n";
    }

   void equate_string(char s[100])                         //String Comapare
   {
       if(strcmp(STR,s)==0)
        cout<<"\nBoth Strings are Equal!";

       else
        cout<<"\nBoth Strings are not Equal!\n";
   }

   void output_string()                                     //Output String
   {
       cout<<STR<<endl;
   }
};

int main()                                                    //Main Function
{
    int choice;
    char str[100],s[100];

    cout<<"Enter a String : ";
    cin.getline(str,100);
    cout<<"---*---*---*---*---";

    STRINGS s1(str);                                        //Object creation

   while(1)
   {
       cout<<"\n1. Store The String. \n2. Add Strings. \n3. Equate String. \n4. Output Strings. \n5. Exit\n";
       cout<<"Enter Your Choice : ";
       cin>>choice;

       switch(choice)
       {
           case 1:
               s1.store_string(str);
               break;

           case 2:
               cout<<"Enter the other String to concatenate : ";
               cin>>s;
               s1.add_string(s);
               break;

           case 3:
               cout<<"Enter the other string to equate : ";
               cin>>s;
               s1.equate_string(s);
               break;

           case 4:
               s1.output_string();
               break;

           case 5:
               exit(1);

           default:
               cout<<"\nError! Please Enter Valid Option.\n";

       }
   }
return 0;
}

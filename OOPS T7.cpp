/*Pawanesh Mishra 191921
  Friend Function*/

#include<bits/stdc++.h>
using namespace std;

class TIME
{
  private:                 //Private Members
          int hour;
          int minute;

  public:                  //Public Members
          TIME()
          {
           hour = 0;
           minute = 0;
          }

          TIME(int h, int  m) //Parameterized constructor
          {
           hour = h;
           minute = m;
          }

          void COUT()
          {
           cout<<"Hour: "<<hour<<endl;
           cout<<"Minute: "<<minute<<endl;
          }

  friend TIME ADD(TIME t1,TIME t2); //Declaration of friend function
};

TIME ADD(TIME t1,TIME t2)          //Definition of friend function
{
  TIME ans((t1.hour + t2.hour),(t1.minute + t2.minute));
  return ans;
}

int main(){
  int a,b;

  cout<<"Enter First Time to be Taken"<<endl; //Taking First Input
  cout<<"Enter Hours: "; cin>>a;
  cout<<"Enter Minutes: "; cin>>b;
  TIME T1(a,b);
  cout<<"Your Inputs were : "<<endl;
  T1.COUT();
  cout<<"--*--*--*--*--*--*--*--*--*--"<<endl;

  cout<<"Now Enter Second Time to be Taken"<<endl;  //Taking Second Input
  cout<<"Enter Hours: "; cin>>a;
  cout<<"Enter Minutes: "; cin>>b;
  TIME T2(a,b);
  cout<<"Your Inputs were : "<<endl;
  T2.COUT();
  cout<<"--*--*--*--*--*--*--*--*--*--"<<endl;

  TIME ans = ADD(T1,T2);                          //Getting Results
  cout<<"Sum of both nummbers is: \n";
  ans.COUT();
  return 0;
}

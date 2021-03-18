#include<bits/stdc++.h>
using namespace std;

class Power                                   //Making a Class 
{
    private:                                         
    double Num_power;
    double Num_base;

    public:
    void getNum()                            //Function to get Base Number
    {
        cin>>Num_base;
    }

    inline void getPower()                   //Inline function to get power
    {                                        //Power set as default as 2
        Num_power=2;
        cout<<pow(Num_base,Num_power);
    }

};
 
int main()                                   //Main fuction
{
    Power P1;
    cout<<"Enter an integer to get it's power: ";     
    P1.getNum();
    cout<<endl;

    cout<<"The result with power default set to 2: ";     
    P1.getPower();

    return 0;
}
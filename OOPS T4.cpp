
#include<iostream>
#include<cmath>
using namespace std;

float power(double x)                                //Power with 1 parameter
{
    return (float)pow(x,2);
}

float power(double x,double y)                        //Power with 2 parameter
{
    return (float)pow(x,y);
}

void display(double data)                           //Display Function
{
    cout<<data<<endl;
}

int main()                                         //Main Function
{
    double a,b,i,j;
    cout<<"Enter Two number:"<<endl;
    cin>>a>>b;

    i=power(a);
    j=power(a,b);

    cout<<"A ^ 2 is : ";
    display(i);
    cout<<"A ^ B is : ";
    display(j);
    return 0;
}

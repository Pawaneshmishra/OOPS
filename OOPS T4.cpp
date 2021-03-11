
#include<iostream>
#include<cmath>
using namespace std;

float power(float x)                                //Power with 1 parameter
{
    return pow(x,2);
}

float power(float x,float y)                        //Power with 2 parameter
{
    return pow(x,y);
}

void display(float data)                           //Display Function
{
    cout<<data<<endl;
}

int main()                                         //Main Function
{
    float a,b,i,j;
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

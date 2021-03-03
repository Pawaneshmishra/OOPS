#include<iostream>
#include<cmath>
using namespace std;

class Number                                          //Creating class "Number"
{
    public:
        int power(double x, int y)
        {
            int i=pow(x,y);
            return i;
        }
};

int main()
{
    int n=2;                                          //Declaring Variables
    double m;

    cout<<"Enter a Number to get it's power"<<endl;  //Getting input
    cin>>m;

    Number a;                  //Creating an Object
    cout<<"The power of Number is:"<<endl;
    cout<<a.power(m,n);        //Carrying out power function

    return 0;
}

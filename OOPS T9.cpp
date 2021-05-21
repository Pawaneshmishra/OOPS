/*Pawanesh Mishra 191921
  Constructors*/

#include<bits/stdc++.h>
using namespace std;

class Number
{
 private:
         int Num;
 public:
        Number()  //Constructor with zero argument/ Default.
            {
             Num = 0;
             cout<<"This is default constructor."<<endl;
            }

        Number(int data)   //Constructor with one argument/ Constructor Overloading.
            {
             Num = data;
             cout<<"This is Parametrized constructor"<<endl;
            }

        Number(Number &object)  //Copy Constructor
            {
             Num = object.Num;
             cout<<"This is Copy constructor"<<endl;
            }

        void show()
             {
              cout<<"Number is :"<<Num<<endl;
             }
};

int main(){
    int i;
    cout<<"Enter Number: "<<endl;
    cin>>i;

    Number obj1;
    obj1.show();

    Number obj2(i);
    obj2.show();

    Number obj3(4);
    obj3.show();

    Number obj(obj3);
    obj.show();
return 0;
}

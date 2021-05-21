/*Pawanesh Mishra
  191921*/
//Program 8
#include<bits/stdc++.h>
using namespace std;

class Shape //abstract class with virtual function
    {
     public:
            virtual void numberOfSides() = 0;
    };

class Triangle: public Shape  //Triangle class
    {
     public:
            void numberOfSides()
                {
                 cout<<"A triangle has 3 sides."<< endl;
                }
    };

class Trapezoid: public Shape  //Trapezoid class
    {
     public:
            void numberOfSides()
                {
                 cout<<"A trapeziod has 4 sides."<< endl;
                }
    };

class Hexagon: public Shape    //Hexagon class
    {
     public:
            void numberOfSides()
            {
             cout<<"A hexagon has 6 sides."<< endl;
            }
    };

int main()
{
  Shape *P = new Triangle(); //Using a pointer to access other classes
  P->numberOfSides();

  P = new Trapezoid();
  P->numberOfSides();

  P = new Hexagon();
  P->numberOfSides();

  return 0;
}

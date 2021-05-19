/*Pawanesh Mishra
  191921 B.Tech CSE*/

/*Area Calculation using
Multiple Inheritance*/

#include <iostream>
using namespace std;

class Area                                  //Area class
{
	public:
		int getArea(int l, int b)
		{
			return (l * b);
		}
};

class Perimeter                            //Perimeter class
{
	public:
		int getPerimeter(int l, int b)
		{
			return (2*(l + b));
		}
};

//Here Rectangle class is inherited from area and perimeter

class Rectangle : public Area, public Perimeter //Mutiple Inherited Class
{
	int length;
	int breadth;
	public:
		Rectangle()
		{
			cout<<"Enter Length of Rectangle: ";
			cin>>length;
			cout<<"\nEnter Breadth of Rectangle: ";
			cin>>breadth;
		}
		int area()
		{
			return Area::getArea(length, breadth);
		}
		int perimeter()
		{
			return Perimeter::getPerimeter(length, breadth);
		}
};

int main()        //Main function
{
	cout<<"Here Rectangle class is inherited from Area and Perimeter class!!"<<endl;
    Rectangle R;

	cout << "Area of your Rectangle is: " << R.area() << endl;
	cout << "Perimeter of your Rectangle is : " << R.perimeter() << endl;
	return 0;
}

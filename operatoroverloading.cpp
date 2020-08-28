/*
Create Box class containing data members (width ,height,Length) and Member functions showdata
and Volume.. Apple the concept of Operator Overloading and overload operators (+,-,* ,/) for addition
subtraction multiplication and division of Objects of Box class.
*/
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class Box {
public:
	double height;
	double width;
	double length;
public:
	Box() {
	};
	Box(int h, int w, int l) :height(h), width(w), length(l) {
	};
	void setheight(double h) {
		height = h;
	}
	void setwidth(double w) {
		width = w;
	}
	void setlength(double l) {
		length = l;
	}
	double getlength() {

		return length;
	}
	double getwidth() {

		return width;
	}
	double getheight() {

		return height;
	}
	double volume() {
		return height * length * width;
	}
	Box operator+(const Box& b) {
		Box box;
		box.height = this->height + b.height;
		box.width = this->width + b.width;
		box.length = this->length + b.length;

		return box;
	}
	Box operator/(const Box& b) {
		Box box;
		box.height = this->height / b.height;
		box.width = this->width / b.width;
		box.length = this->length / b.length;

		return box;
	}
	Box operator-(const Box& b) {
		Box box;
		box.height = this->height - b.height;
		box.width = this->width - b.width;
		box.length = this->length - b.length;

		return box;
	}
	Box operator*(const Box& b) {
		Box box;
		box.height = this->height * b.height;
		box.width = this->width * b.width;
		box.length = this->length * b.length;

		return box;
	}
	void showdata(Box b3) {
		cout << "Details of box b3 are\n\n" << endl;
		cout << "Height of b3 is\t" << height << "m" << endl;
		cout << "Width of b3 is\t" << width << "m" << endl;
		cout << "Length of b3 is\t" << length << "m" << endl;
	}
};
int main() {

	Box b1(5.6, 6.4, 7.2);
	Box b2(3.5, 4.8, 2.2);
	Box b3;

	b3 = b1 + b2;
	
	b3.showdata(b3);
	cout << "This result was by using + operator" << endl;
	cout << "The volume is \t" << b3.volume() <<"m^3\n\n"<< endl;

	b3 = b1 * b2;
	
	b3.showdata(b3);
	cout << "This result was by using * operator" << endl;
	cout << "The volume is \t" << b3.volume() << "m^3\n\n"<<endl;
	
	
	b3 = b1 - b2;
	cout << "using - operator" << endl;

	b3.showdata(b3);
	cout << "This result was by using - operator" << endl;
	cout << "The volume is \t" << b3.volume() <<"m^3\n\n" <<endl;
	
	b3 = b1 / b2;
	
	b3.showdata(b3);
	cout << "This result was by using / operator" << endl;
	cout << "The volume is \t" << b3.volume() <<"m^3\n\n"<< endl;


	_getch();
	return 0;
}
/*output*/
/*
Details of box b3 are


Height of b3 is 8m
Width of b3 is  10m
Length of b3 is 9m
This result was by using + operator
The volume is   720m ^ 3


Details of box b3 are


Height of b3 is 15m
Width of b3 is  24m
Length of b3 is 14m
This result was by using* operator
The volume is   5040m ^ 3


using - operator
Details of box b3 are


Height of b3 is 2m
Width of b3 is  2m
Length of b3 is 5m
This result was by using - operator
The volume is   20m ^ 3


Details of box b3 are


Height of b3 is 1.66667m
Width of b3 is  1.5m
Length of b3 is 3.5m
This result was by using / operator
The volume is   8.75m ^ 3
*/
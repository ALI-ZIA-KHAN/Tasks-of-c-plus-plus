#include<conio.h>
#include<string.h>
#include<iostream>
#include<cmath>
using namespace std;
class Circle{
	public:
		double radius;
    public:
    	Circle(){
    		
		};
		Circle(double r){
			radius=r;
			
		}
	    void setradius(double r){
	    	radius=r;
		}
		double getradius(){
			return radius;
		}	
		double calcArea(){
		 return M_PI * radius*radius;
		}	
		double calcCircumference(){
			
	    return	 2* M_PI * radius;	
		}
		string ToString(){
		
			
		}
		bool equals(Circle c){
			
		} 
};
class Cylinder:public Circle{
   public:
	double height;
	public:
		Cylinder(){
			
		};
		Cylinder(double r,double h):Circle(radius){
		
			height=h;
		};
		void setheight(double h){
			height=h;
		}
		double getheight(){
			return height;
		}
	    virtual double calcArea(){
		
	    	return (2* M_PI * radius * height) + (2* M_PI* radius * radius );
		}
		double calcVolume(){
			return M_PI*radius*height;
		}
		virtual string ToString(){
			
		}
		virtual bool equals(Cylinder c){
			
		} 
	
	
};
int main(){
	Circle c1(5.5);
	cout<<"The area of circle is\t"<<c1.calcArea()<<endl;
	Cylinder c2(2.2,3.5);
	cout<<"The area of cylinder is\t"<<c2.calcArea()<<endl;
	
	Circle *ptr;
	ptr=new Circle;
	ptr->setradius(3.3);
	cout<<"The area of circle is\t"<<ptr->calcArea()<<endl;
	Cylinder c3 ;
	Cylinder *ptr1;
	ptr1=&c3;
	ptr1->setradius(4.2);
	ptr1->setheight(10.0);
	cout<<"The area of cylinder is\t"<<ptr1->calcArea()<<endl;
}
/*
The area of circle is   95.0332
The area of cylinder is 1.03754e-322
The area of circle is   34.2119
*/

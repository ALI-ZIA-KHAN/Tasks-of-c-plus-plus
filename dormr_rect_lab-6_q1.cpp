#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
    protected:
        int length;
        int breadth;        
    public:
        rectangle()
        {}
        rectangle(int l, int b)
		{
            length = l;
            breadth = b;
        }

        int getlength()
		{
		return length;
		}
        int getbreadth()
		{
		return breadth;
		}
        
        void setlength(int l)
		{
		length = l;
		}
        void setbreadth(int b)
		{
		breadth = b;
		}
        
        double area(){
            return length*breadth;
        }
        
        virtual void showData(){
            cout << "Length = " << getlength() << endl;
            cout << "Breadth = " << getbreadth() << endl;
        }
};

class dormroom:public rectangle{
    private:
        int height;
    public:
        dormroom()
        {}
        dormroom(int l, int b, int h):rectangle(l,b), height(h)
        {}
        
        int getheight(){
		return height;
		}
        void setheight(int h){
		height = h;}
        
        double volume(){
            return length*breadth*height;
        }
        
        virtual void showData(){
            rectangle::showData();
            cout << "Height = " << getheight() << endl;
        }
};

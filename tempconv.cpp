#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	cout<<"Temperature converter"<<endl;
	double f,c;
	double fah,cen;
	cout<<"Enter temperature in fahrenheit: \t";
	cin>>f;
	cen=(f-32)/1.8;
	cout<<"The temperature in centigrade is :\t"<<cen<<endl;
    cout<<"Enter temperature in centigrade: \t";
    cin>>c;
    fah=1.8*c+(32);
    cout<<"The temperature in fahrenheit is :\t"<<fah<<endl;
	
}
/*
Temperature converter
Enter temperature in fahrenheit:        98.6
The temperature in centigrade is :      37
Enter temperature in centigrade:        37
The temperature in fahrenheit is :      98.6
*/

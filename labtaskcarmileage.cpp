#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Car{
private:
	string brandname;
	double pricenew;
	string color;
	double odometer;
public:
	Car()
	{
	};
Car(string b,double p,string c,double o):brandname(b),pricenew(p),color(c),odometer(o){
	
};
string getbrandname(){
	return brandname;
}
double getpricenew(){
	return pricenew;
}
string getcolor(){
	return color;
}
double getodometer(){
	return odometer;
}
void setbrandname(string b){
	brandname=b;
}
void setpricenew(double p){
	pricenew=p;
}
void setcolor(string c){
	color=c;
}
void setodometer(double o)
 {
      odometer=o;
}
double getpriceafteruse(){
	double priceafteruse= pricenew *(1-(odometer/600000));
	return priceafteruse;
}
void updatemileage(double m){
	odometer=m;
}
void outputdetails(){
	cout<<"the car brand is: "<<brandname<<endl;
	cout<<"the price of new car is "<<pricenew<<endl;
	cout<<"the colour name is: "<<color<<endl;
	cout<<"The mileage of car before use is"<<odometer<<endl;
	
}
void takinginfo(Car cn){
	cout<<"Enter brandname"<<endl;
	cin>>brandname;
	cout<<"Enter price when new"<<endl;
	cin>>pricenew;
	cout<<"Enter color"<<endl;
	cin>>color;
	cout<<"Enter mileage travelled"<<endl;
	cin>>odometer;
	
	
}

};
int main(){
	Car c1;
	c1.takinginfo(c1);
	c1.outputdetails();
     c1.updatemileage(100);
     cout<<"the price after certain mileage is "<<c1.getpriceafteruse()<<endl;
     Car c2;
	c2.takinginfo(c2);
	c2.outputdetails();
     c2.updatemileage(150);
     cout<<"the price after certain mileage is "<<c2.getpriceafteruse()<<endl;
	 	 	
}


	



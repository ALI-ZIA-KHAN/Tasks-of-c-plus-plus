#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
cout<<"cofee bean shop"<<endl;
double m,j,s;
int i;
int l;
cout<<"Enter no of bags you want please\t";
cin>>l;
s=l*5.50;
i=l%20;
j=l/20;
double x=j*1.80;
int r=i%10;
double q=i/10;
double y=q*1.00;
if(r<6){
	m=1;
}
else{

	m=2;
}
double n=m*0.60;
double result=(s)+(x)+(y)+(n);
cout<<"large boxes\t"<<j<<endl;
cout<<"medium boxes\t"<<q<<endl;
cout<<"small boxes\t"<<m<<endl;
cout<<"result is\t"<<result<<endl;
}

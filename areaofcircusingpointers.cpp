#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
using namespace std;	
double CalcArea(const double *const pt1){
	
	return (M_PI)*  (*pt1) * (*pt1);
};
int main(){
	
	double value=5.3;
	const double *const pt1=&value;
	cout<<"The Area if circle is\t "<<CalcArea(&value)<<"meter sq."<<endl;
	
}

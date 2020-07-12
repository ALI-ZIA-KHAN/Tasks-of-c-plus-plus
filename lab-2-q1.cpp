#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	char a[5];
	char b[5];
	int l,m;
	double y,z;
	cout<<"Enter the cordinate of first point in the form (x,y)"<<endl;
	for(int i=0;i<5;i++){
		
		cin>>a[i];
	}
	cout<<"Enter the cordinate of second point in the form (x,y)"<<endl;
	for(int j=0;j<5;j++){
		
		cin>>b[j];
	}
	l=(b[1]-a[1])*(b[1]-a[1]);
	m=(b[3]-a[3])*(b[3]-a[3]);
	y=l+m;
	z=sqrt(y);
	
	cout<<"The distane between two points is   "<<z<<"  meters"<<endl;
	
	return 0;
}   
/**
Enter the cordinate of first point in the form (x,y)
(7,5)
Enter the cordinate of second point in the form (x,y)
(3,2)
The distane between two points is   5  meters
*/

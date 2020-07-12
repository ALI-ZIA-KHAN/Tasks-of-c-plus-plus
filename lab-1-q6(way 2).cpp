#include<iostream>
#include<conio.h>

using namespace std;	
int main()
{
int a[2];
int c;
int d;
cout<<"enter no.s plz:"<<endl;
for(int i=0;i<2;i++){
   cin>>a[i];

}
for(int j=0;j<2;j++){
	
	cout<<a[j];
}
cout<<"\n**********"<<endl;
c=a[0];
d=a[1];


cout<<"After reversing the order"<<endl;
cout<<d;
cout<<c<<endl;

return 0;
}

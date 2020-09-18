#include<iostream>
#include<conio.h>
using namespace std;

void sum(int *p1,int *p2){	
	int c[5];
	int *result;
	result=c;
	
	for(int i=0;i<5;i++){
		
		*result=*p1 + *p2;
	cout<<"num1["<<i<<"]="<<*p1<<"+"<<"num2["<<i<<"]="<<*p2<<"\t and result is"<<*result<<endl;
         p1++;
	     p2++;		
	}	
}
int main(){
	
	int num1[5]={23,45,62,21,30};
	int num2[5]={2,5,4,7,8};
	int *p1,*p2;
	//p1 and p2 will not take argument from num1 and num2 until we give control of them to pointers
	p1=num1;
	p2=num2;
	cout<<"The ouput is:\t"<<endl;
	sum(num1,num2);
	
	_getch();
	return 0;
				
}

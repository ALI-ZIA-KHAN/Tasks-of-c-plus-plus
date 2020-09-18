#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
using namespace std;
int table(int *ptr1){
	for(int i=1;i<=10;i++){
		
     cout<<*ptr1<<"*"<<i<<"="<<*ptr1 *  i <<endl;
	 	
	}
	
	
}
int main(){
	int no=3;
	int *ptr1;
	ptr1=&no;

	table(&no);
	
}

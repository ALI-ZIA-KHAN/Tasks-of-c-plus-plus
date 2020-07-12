#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	
	int n,rev,rem=0;
	cout<<"Hey! plz give two digit value so that we will reverse it"<<endl;
	cin>>n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;	
		
	}
	
	cout<<"After reversing\n"<<rev<<endl;
	return 0;
	
	
}
/*
Hey! plz give two digit value so that we will reverse it
52
After reversing
25
*/

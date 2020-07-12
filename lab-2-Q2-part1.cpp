#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[3][3]={1,4,7,2,3,6,5,4,2};
	int b[3][3]={3,1,2,6,9,1,3,2,7};
	int c[3][3]={0,0,0,0,0,0,0,0,0};
 for(int i=0;i<=2;i++){
 	for(int j=0;j<=2;j++){
 		
 		c[i][j]=a[i][j]+b[i][j];
 		
	 }
 }	
	
for(int i=0;i<=2;i++){
 	for(int j=0;j<=2;j++){
 		
 		cout<<"["<<c[i][j]<<"]"<<"  ";//space between numbers
 		
	 }
     cout<<endl; //or new line after each row
 }		
	
	return 0;
	
}

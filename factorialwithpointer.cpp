/*factorial of a number*/
#include<conio.h>
#include<iostream>
using namespace std;

int factorial( int *pt1){
   
   int fact=1;
   for(int i=1;i<=*pt1;i++){
   	
   	fact=fact*i;
   }
	return fact;
		
}




int main(){
  int a;
  int *pt1;
  cout<<"Enter no please to claculate factorial"<<endl;
  cin>>a;
  pt1=&a;
  cout<<"The factorial of : " <<*pt1<<" != "<<factorial(&a)<<endl;
}
  	



/*output
Enter no please to claculate factorial
5
The factorial of : 5 is---------- 5 != 120
*/

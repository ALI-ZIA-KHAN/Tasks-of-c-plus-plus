#include<iostream>
#include<conio.h>

using namespace std;	
int main()
{
   int a,b;
   int sum;
   double average;
   cout<<"Enter first number please:"<<endl;
   cin>>a;
   cout<<"Enter second number please:"<<endl;
   cin>>b;
   
   sum=a+b;
   average=sum/2;
   
   cout<<"The sum of two numbers is:"<<sum<<endl;
   cout<<"The average of two numbers is:"<<average<<endl;
   
   _getch();
   return 0;
   
}
/*output
Enter first number please:
5
Enter second number please:
3
The sum of two numbers is:8
The average of two numbers is:4
*/

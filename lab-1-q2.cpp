#include<iostream>
#include<conio.h>

using namespace std;	
int main()
{
  int feets;
  int inches;
  int ft;
  cout<<"Hey !! Enter your height in inches please:"<<endl;
  cin>>inches;
  feets=inches/12;
  ft=inches%12;
  
  cout<<"your height in inches is:\t"<<inches<<endl;
  cout<<"AFTER CONVERSION:"<<endl;
  cout<<"Your height in feet inches is:"<<feets<<"*"<<" "<<ft<<"*"<<endl;
  return 0;
  
}
  
/*output
Hey !! Enter your height in inches please:
20
your height in inches is:       20
AFTER CONVERSION:
Your height in feet inches is:1* 8*
*/

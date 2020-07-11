#include<iostream>
#include<conio.h>

using namespace std;	
int main()
{
  int time;
  int hours,hr;
  
  int min;
  int sec;
  cout<<"Hey !! Enter your time in seconds please:"<<endl;
  cin>>time;
  hours=time/3600;
  hr=time%3600;
  min=hr/60;
  sec=hr%60;
  
  cout<<"You gave this time\t"<<time<<endl;
  cout<<"Hours in the time are:"<<hours<<endl;
  cout<<"Minutes in the time are:"<<min<<endl;
  cout<<"Seconds in time are:"<<sec<<endl;
  return 0;
  
}
  
/*output*
Hey !! Enter your time in seconds please:
3713
You gave this time3713
Hours in the time are:1
Minutes in the time are:1
Seconds in time are:53
*/

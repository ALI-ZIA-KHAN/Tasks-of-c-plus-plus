#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
struct Address{
	
	char houseno[50];
	int pin;
	char city[50];
	
	
};
struct Employee{
	
	int empid;
	char emplname[50];
	float empsalary;
	Address empaddress;
	
	
	
};

int main(){
	
	Address a1={"s-2/8542",6020,"Karachi"};
	Employee e1={101,"Edward",45000,a1};
	if(e1.empsalary<50000){
	  e1.empsalary+=5000;
	
	}
	else{
		e1.empsalary+=0;
	}
	cout<<"The details are\t"<<endl;

	cout<<"The employeee id is \t"<<e1.empid<<endl;
	cout<<"The employee name is\t"<<e1.emplname<<endl;
	cout<<"The employee salary is\t"<<e1.empsalary<<endl;
	cout<<"The employee address is\t"<<e1.empaddress.houseno<<endl;

	cout<<"The pin is\t"<<e1.empaddress.pin<<endl;
	cout<<"The city code is\t"<<e1.empaddress.city<<endl;
	

	return 0;
	
}



/*output
The details are
The employeee id is     101
The employee name is    Edward
The employee salary is  50000
The employee address is s-2/8542
The pin is      6020
The city code is        Karachi
*/

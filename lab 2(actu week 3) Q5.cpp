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
	
	Address a1;
	Employee e1;
	cout<<"Enter details \t"<<endl;

	cout<<"The employeee id  \t";
	cin>>e1.empid;
	cout<<"The employee name \t";
	cin>>e1.emplname;
	cout<<"The employee salary is\t";
	cin>>e1.empsalary;
	cout<<"The employee address is\t";
	cin>>e1.empaddress.houseno;

	cout<<"The pin is\t";
	cin>>e1.empaddress.pin;
	cout<<"The city code is\t";
	cin>>e1.empaddress.city;
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


/*   101
Enter Employee Name : Afrazkhan
Enter Employee Salary : 45000
Enter Employee House No : 4598/D
Enter Employee City : Karachi
Enter Employee Pin Code : 15456*/

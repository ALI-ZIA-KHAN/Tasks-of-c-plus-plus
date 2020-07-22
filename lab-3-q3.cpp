#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

struct student{
	
	char firstname[20];
	char lastname[20];
	double score;
	
};

	

int main(){
	
	student s1={"Ali","Zia Khan",84.5};
/*	 s1={"shahid","afrisdi",82.3};*/
/*	s1.firstname="Ali";
	s1.lastname="Zia Khan";
	s1.score=84.5;*/
	cout<<"The details are"<<endl;
    cout<<endl;
    cout<<"The first name of student is \t"<<s1.firstname<<endl;
    cout<<"The last name of student is \t"<<s1.lastname<<endl;
    cout<<"The score is \t"<<s1.score<<endl;
	
	
	return 0;
	
}

/*output
The details are

The first name of student is    Ali
The last name of student is     Zia Khan
The score is    84.5
*/











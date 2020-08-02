#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

struct student{

	char firstname[20];
	char lastname[20];
	double score;



student showinfo(student s1){
	
	cout<<"	THE FIRST NAME IS\n";
	cout<<s1.firstname<<endl;
	cout<<"The second name is\n";
	cout<<s1.lastname<<endl;
	cout<<"The score is\n"<<s1.score<<endl;//
	
}

};
int main(){

	student s1={"Ali","Zia Khan",84.5};
/*	 s1={"shahid","afrisdi",82.3};*/
/*	s1.firstname="Ali";
	s1.lastname="Zia Khan";
	s1.score=84.5;*/
	cout<<"The details are"<<endl;
  /*  cout<<"The first name of student is \t"<<s1.firstname<<endl;
    cout<<"The last name of student is \t"<<s1.lastname<<endl;
    cout<<"The score is \t"<<s1.score<<endl;

*/
     s1.showinfo(s1);
	return 0;

}


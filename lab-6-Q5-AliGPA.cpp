#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
class GradeRecord {
	public:
		string studentID;
		int credit;
		int gradepoint;
	public:
	GradeRecord(string i){
		studentID=i;
		credit=0;
		gradepoint=0;
	};
	GradeRecord(string i, int c,int gr_p){
		studentID=i;
		credit=c;
		gradepoint=gr_p;
	};
	double calculate_GPA(){
		if(credit){
		
		return (double)gradepoint/(double)credit;
		}
		else  
		return 0;
	}	
	void gp_info(){
		cout<<"STUDENT:"<<studentID;
		cout<<"\tUnits:"<<credit;
		cout<<"\tGradePts:"<<gradepoint;
		cout<<"\tGPA";
		printf("%.2f",calculate_GPA());
	}
	void updaterec(int c,int gr_p){
		credit+=c;
		gradepoint+=gr_p;
	}
};


int main(){
	
	GradeRecord Ali("0210-BCS-01");
	cout<<"Ali's GPA is"<<Ali.calculate_GPA()<<endl;
	int c,g;
	cout<<"1st semester grade points and units are:";
	cin>>g>>c;
	Ali.updaterec(c,g);
	Ali.gp_info();
	return 0;
	
	
	
}

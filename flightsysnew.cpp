#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class flight {
public:
	int flightno;
	string source;
	string destination;
	int numberofseats;

public:
	flight() {
	};
	flight(int fl, string from, string to, int n) {

		flightno = fl;
		if(from.length()<=3){
			source=from;
		}
		else{
			source=from.substr(0,3);
		}


		if(to.length()<=3){
			destination=to;
		}
		else{
			destination=to.substr(0,3);
		}

		numberofseats = n;
	};

 flight(int fl, int n) :flightno(fl), numberofseats(n) {
		source = "";
		destination = "";

	};
	flight(int fl) :flightno(fl) {
		numberofseats = 0;
		source = "";
		destination = "";

	};
	void setflightno(int fl) {
		flightno = fl;
	}
	void setsource(string s) {
		source = s;
	}
	void setdestination(string d) {
		destination = d;
	}
	void setnumberofseats(int n) {
		numberofseats = n;
	}

	string getsource() {
		return source;
	}
	string getdestination() {
		return destination;
	}
	int getnoofseats() {

		return numberofseats;
	}
	void reserve(int tellseats) {
		if (tellseats <= numberofseats) {
			numberofseats = numberofseats - tellseats;
			cout << "your resereved seats are" << tellseats << endl;
		}
		else
			cout << "No seats are available" << endl;
	}
	void cancel(int tellseats) {
		if (tellseats <= numberofseats) {
			numberofseats = numberofseats + tellseats;
		}
		else
			cout << "No such big seats can be cancelled" << endl;
	}
	void showdata() {
		cout << "The flight number is\t" << flightno << endl;
		
		cout <<"fROM\t"<<source<< endl;
		cout << "TO:\t" << destination << endl;
		cout << "status of seats\t" << numberofseats << endl;
		cout << "seats remaining" << 340 - numberofseats << endl;
	}
	void takinginfo(flight f) {
		cout << "Enter flight no\t";
		cin >> flightno;
		cout << "source\t";
		string r;

		cin >> r;
		if(r.length()<=3){
			source=r;
		}
		else{
			source=r.substr(0,3);
		}
		cout << "Enter destination\t";
		string m;
		cin>>m;
			if(m.length()<=3){
			destination=m;
		}
		else{
			destination=m.substr(0,3);
		}
		cout << "Enter seats to reaserve\t";
		cin >> numberofseats;


	}


};
int main() {
	flight fl1;
	cout << "For first flight" << endl;
	fl1.takinginfo(fl1);
	fl1.showdata();
	flight fl2;
	cout << "For second flight" << endl;
	fl2.takinginfo(fl2);
	if (fl1.flightno == fl2.flightno) {
		cout << "sorry __!!!!__your flight no is same" << endl;
	}
	else
	{
		fl2.showdata();
		cout << "Flight is not the same" << endl;
	}
	





	_getch();
	return 0;

}

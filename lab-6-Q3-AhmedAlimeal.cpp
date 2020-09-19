#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Mealbills {
public:
	string resname;
	double localtax;
	double mealcost;
	double tip;
	double totalcost;
	double payment;
	double change;
public:
	Mealbills() {

	};
	Mealbills(string r, double t) {
		resname = r;
		localtax = t;

	};

	string getresname() {
		return resname;
	}


	double gettotalcost() {
		return totalcost;
	}


	void valterenterinfo() {
		cout << "ENTER COST OF MEAL ";
		cin >> mealcost;



	}
	void generatebill() {

		tip = mealcost * 0.15;
		cout << "mealcost\t" << mealcost << endl;
		cout << "tax:\t" << localtax << endl;
		cout << "Tip:\t" << tip << endl;
		totalcost = mealcost + (tip * 0.15) + localtax;
		cout << "Total Cost" << totalcost << endl;
	}
	void setpayment() {
		cout << "Enter Payment:" << endl;
		cin >> payment;

	}


	void finalreceipt() {
		cout << "Toatal Cost\t" << totalcost << endl;
		cout << "Payment\t" << payment << endl;
		if (payment > totalcost) {
			change = payment - totalcost;
		}
		cout << "Change\t" << change << endl;
	//	cout << "Thanks for dining at\t" << resname << endl;
	}


};
class Account :public Mealbills {
public:
	string StudentID;
	string name;
	int balance;
public:
	Account() {

	};
	Account(string i, string n, long b)  {
		StudentID = i;
		name = n;
		balance = b;
	};
	string getname() {
		return name;
	}
	virtual void valterenterinfo() {
		cout << "Enter meal cost:\t" ;
		cin >> mealcost;


	}
	virtual void generatebill() {


		tip = mealcost * 0.15;
		localtax=localtax*0.6;
		cout<<"Bill"<<endl;
		cout << "mealcost\t" << mealcost << endl;
		cout << "tax:\t" << localtax << endl;
		cout << "Tip:\t" << tip << endl;
		totalcost = mealcost + (tip) + localtax;
		cout << "Total Cost:\t" << totalcost << endl;
	}
	virtual	void setpayment() {
		cout << "Enter Payment\t";
		cin >> payment;
	}
   virtual string getresname() {
		return resname;
	}
	virtual void finalreceipt() {
		cout<<"Receipt"<<endl;
		cout << "Toatal Cost:\t" << totalcost << endl;
		cout << "Payment:\t" << payment << endl;
		if (payment > totalcost) {
			change = payment - totalcost;
		}
		cout << "Change:\t" << change << endl;		}
	void showinfo() {
		cout << "ID:\t" << StudentID << endl;
		cout << "Name:\t" << name << endl;
		cout << "Balance\t" << balance+payment- totalcost << endl;
	}
};
int main() {
	Mealbills m1("Summit Restaurant",6);
	Account ahmedAli("0210-BCS-06", "Ahmed Ali", 2000);
	ahmedAli.valterenterinfo();
	cout << "Amount of" << ahmedAli.getname() << "\'s Bill:" << ahmedAli.mealcost<<endl;
	ahmedAli.generatebill();
	ahmedAli.setpayment();
	cout << "\nCharge the bill to   " << ahmedAli.getname() << "\'s Account " <<ahmedAli.totalcost<<endl;
	ahmedAli.finalreceipt();
	cout<<"Thanks For Dining at\t"<<m1.getresname()<<endl;
	cout << "Current Status Of    " << ahmedAli.getname() << "\'s Account" << endl;
	ahmedAli.showinfo();
	return 0;
}


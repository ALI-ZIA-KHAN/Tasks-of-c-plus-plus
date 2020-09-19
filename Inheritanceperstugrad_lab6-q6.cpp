#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string gender;
    int age;

public:
    Person() {
        name = 'NULL';
        gender = 'NULL';
        age = 0;
    }
    Person(string n, string g, int a) :name(n), gender(g), age(a) 
	{
	}

    string getname() 
	{ return name;
	 }
    string getgender() { 
	return gender; 
	}
    int getage() { 
	return age; 
	}

    void setname(string n) { 
	name = n; 
	}
    void setgender(string g) { 
	gender = g; 
	}
    void setage(int a) {
	 age = a; 
	 }

    virtual void showinfo() {
        cout << "Name : " << name << endl;
        cout << "Gender : " << gender << endl;
        cout << "Age : " << age << endl;
    }
};

class Student :public Person {
protected:
    int rollNo;

public:
    Student() {
	}
    Student(string n, string g, int a, int r) :Person(n, g, a), rollNo(r)
    {
	}

    int getrollNo() { 
	return rollNo;
	 }

    void setrollNo(int r) {
	 rollNo = r;
	  }

    virtual void showinfo() {
        Person::showinfo();
        cout << "Roll No : " << rollNo << endl;
    }
};

class Graduate :public Student {
private:
    double gradePoints;
    int creditHours;

public:
    Graduate() {}
    Graduate(string n, string g, int a, int r, double gp, int ch) :Student(n, g, a, r), gradePoints(gp), creditHours(ch)
    {}

    int getcredit() { 
	return creditHours; 
	
	}
    double getgrade() { 
	return gradePoints; 
	}

    void setcredit(int ch) { 
	creditHours = ch; 
	}
    void setgrade(double gp) { 
	gradePoints = gp; 
	}

    double cgpa() {
        return gradePoints / (double)creditHours;
    }

    virtual void showinfo() {
        Student::showinfo();
        cout << "Credit Hours : " << creditHours << endl;
        cout << "Grade Points : " << gradePoints << endl;
        cout << "GPA : " << setprecision(3) << cgpa() << endl;
    }
};

int main() {
    Graduate g1("Ali", "Male", 50, 20, 55, 19);
    g1.showinfo();
  
    return 0;
}

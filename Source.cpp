#include<conio.h>
#include<string.h>
#include<iostream>
#include<cmath>
using namespace std;
class Doors {
public:
	double height;
	double width;
	int totaldoors;
public:
	Doors() {

	};
	Doors(double h, double w, int t) :height(h), width(w), totaldoors(t) {
	};
	void showdoors() {
		cout << "the height of doors is" << height << endl;
		cout << "the width of doors is" << width << endl;
		cout << "the no of doors are" << totaldoors << endl;
	}
};
class Windows {
public:
	double totalwindows;
	string color;
	string material;
public:
	Windows() {

	};
	Windows(double tw, string c, string m) :totalwindows(tw), color(c), material(m) {
	};
	void showwindows() {
		cout << "the total no of windows" << totalwindows << endl;
		cout << "the color of windows is" << color << endl;
		cout << "the  material is" << material << endl;
	}
};
class Engine {
public:
	double horsepower;
	int no_of_pistons;
	string enginetype;
public:
	Engine() {

	};
	Engine(double hp, int p, string et) :horsepower(hp), no_of_pistons(p), enginetype(et) {
	};
	void showengine() {
		cout << "the engine horsepowe" << horsepower << endl;
		cout << "no of pistons" << no_of_pistons << endl;
		cout << "the type of engine is" << enginetype << endl;
	}
};
class Wheels {
public:
	string rim_colors;
	double wheel_radius;
	Wheels(string r, double wr) :rim_colors(r), wheel_radius(wr) {
	};
public:
	Wheels() {

	};
	void showwheels() {
		cout << "the color of rims are" << rim_colors << endl;
		cout << "the radius of wheel are" << wheel_radius << endl;
	}

};
class Car {
public:
	string brand;
	int year;
	string name;
	Doors car_doors;
	Windows car_windows;
	Engine car_engine;
	Wheels car_wheels;
public:
	Car() {

	};
	Car(string b, int y, string n, Doors d1, Windows wi1, Engine e1, Wheels w1) {
		brand = b;
		year = y;
		name = n;
		car_doors = d1;
		car_windows = wi1;
		car_engine = e1;
		car_wheels = w1;

	};
	void showdata() {
		cout << "the car brand is" << brand << endl;
		cout << "the car year is" << year << endl;
		cout << "The car name is" << name << endl;
		cout << "the door details are" << endl;
		car_doors.showdoors();
		cout << "the window details are" << endl;
		car_windows.showwindows();
		cout << "the engine details are" << endl;
		car_engine.showengine();
		cout << "the wheels details are" << endl;
		car_wheels.showwheels();
	}
};
int main() {
	Doors d1(6.1, 5.5, 4);
	Windows wi1(4, "blue", "glass");
	Engine e1(55.5, 2, "Thermal");
	Wheels w1("pink", 3.2);
	Car c1("toyota", 2019, "corolla", d1, wi1, e1, w1);
	c1.showdata();

}
/*
the car brand istoyota
the car year is2019
The car name iscorolla
the door details are
the height of doors is6.1
the width of doors is5.5
the no of doors are4
the window details are
the total no of windows4
the color of windows isblue
the  material isglass
the engine details are
the engine horsepowe55.5
no of pistons2
the type of engine isThermal
the wheels details are
the color of rims arepink
the radius of wheel are3.2*/
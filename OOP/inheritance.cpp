#include <iostream>
#include <string>
using namespace std;

/*
inheritance is when a calss "inherites" members from a parent classes
*/
//base (parent) class
class Vehicle {
	protected://protected is for private but it lets you use inheritence with it
		string brand = "Ford";
	public:
		void honk() {
			cout << "Tuut, tuut! \n";
		}
};

//derived (child) class
class Car: public Vehicle {
	public:
		string carBrand;
		void setBrand() {
			
			brand = carBrand;
		}
		string getBrand() {
			setBrand();
			return carBrand;
		}
		string model = "mustang\n";
};
//you can have multiple derived classes
//derived (grandchild) class
class Engine: public Car {
	public:
		void noise() {
			cout << "vroom vroom !\n";
		}
};
//you can also derive a class from multiple parent classes, seperated witha comma
class Monster {
	public:
		string whatAmI = "an absolute monster";
};
//derived class
class MonsterMustang: public Engine, public Monster {
};

int main() {
	Engine myCar;
	myCar.honk();
	myCar.noise();
	cout << myCar.getBrand() + " " + myCar.model;	
	MonsterMustang mrDestroyer;
	mrDestroyer.noise();
	cout << mrDestroyer.whatAmI;
	
	return 0;
}

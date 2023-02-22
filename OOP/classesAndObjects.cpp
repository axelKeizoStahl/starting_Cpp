#include <iostream>
#include <string>
using namespace std;

/*
c++ is an object oriented programming language
in OOP there are calsses, objects, attributes, and methods
a class is a blueprint of an object
in a class you can add attributes, which are variables, and methods, which are functions
when you create an instance of that class, you make an object
when you define an object, you also can define the methods and attributes to be specific for your object 
*/

//to make a class, you will initialize it with class
class myClass { //name of class
	public: //access specifier, public saying you can access the calss outside of the class, more on this later
		int myNum; //attribute
		string myString; //attribute
}; //end with semi-colon

int main() {
	//an object is an instance of the class, to initialize an object, use the class name and then your object name
	myClass obj1;

	//to access attributes and set values, use .
	obj1.myNum = 15;
	obj1.myString = "blablabla";

	cout << obj1.myNum << "\n";
	cout << obj1.myString; 
	//you can make as many variables as you want

	return 0;
}

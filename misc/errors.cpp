#include <iostream>
#include <string>
using namespace std;



int main() {
	//try lets you stry a block of code, and throw, lets you throw an error, catch says what the error is
	try {
		int age = 15;
		if (age >= 18) {
			cout << "Access granted - you are old enough.";
		} else {
			throw (age);
		}
	}
	catch (int myNum) {//using ... will catch any type if u dont know if its int or string or whatever but hten you can use the age variable
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
	} 

	return 0;
}

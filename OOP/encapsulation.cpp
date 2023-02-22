#include <iostream>
#include <string>
using namespace std;

//encapsulation uses private in classes to keep data hidden
//you can use get and set functions in public to see the data

class Employee {
	private:
		// Private attribute
		int salary;

	public:
		// Setter
		void setSalary(int s) {
			salary = s;
		}
		// Getter
		int getSalary() {
			return salary;
	}
};

int main() {
	Employee myObj;
	myObj.setSalary(50000);
	cout << myObj.getSalary();
	return 0;
} 
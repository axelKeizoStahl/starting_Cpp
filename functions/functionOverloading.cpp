#include <iostream>
#include <string>
using namespace std;

//you can have the same function but give different parameters
int plusFunc(int x, int y) {
	return x + y;
}
//now we can overload the plusFunc() so that it works with bothint and double
double plusFunc(double x, double y) {
	return x + y;
}

int main() {
	int myNum1 = plusFunc(2, 3);
	double myNum2 = plusFunc(2.9, 9.3);
	cout << "Int: " << myNum1 << "\n";
	cout << "Double: " << myNum2 << "\n";
	return 0;
}

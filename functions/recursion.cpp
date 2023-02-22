#include <iostream>
#include <string>
using namespace std;

//you can use recursion to keep calling you function, like a loop
int rangesum(int k) {
	if (k > 0) {
		return k + rangesum(k-1);
	} else {
		return 0;
	}
}

int main() {
	cout << rangesum(12);
	return 0;
}

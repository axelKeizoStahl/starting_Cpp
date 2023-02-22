#include <iostream>
#include <string>
using namespace std;


/*
	Access specifiers define how the members of the class can be accessed
		public: members can be accessed outside the class
		private: members cannot be accessed outside the class
		protected: private, but it works with inheritance, more on that later
*/

class MyClass {
	public:
		int x;
	private:
		int y;
};//if you do not specify access, it is automatically put as private
//it is good practice to use private, as it reduces errors in the code

int main() {
	MyClass myObj;

	myObj.x = 25;  // Allowed (public)
	myObj.y = 50;  // Not allowed (private)

	return 0;
}

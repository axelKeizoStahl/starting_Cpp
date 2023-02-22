#include <iostream>
#include <string>
using namespace std;

//class methods are like attributes but they are functions
//to access functions in objects, it is the same . as attributes
class MyClass {
	public:
		void hello() {//here we define the function inside the class
			cout << "hello";
		}
};

class Motion {
	public:
		int mph(int mps);//here we just declare the function and will define outside the class
};

int Motion::mph(int mps) {//access functions to define them with ::
	return mps * 60;
}

int main() {
	
	MyClass myObj;
	myObj.hello();

	Motion motionObj;
	cout << motionObj.mph(60);

	return 0;
}

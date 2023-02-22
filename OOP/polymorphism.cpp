#include <iostream>
#include <string>
using namespace std;

//polymorphism is when you give different functionality to inherited traits
class Animals {
	public:
		void animalSound() {
			cout << "the animal makes a sound";
		}
};

class Pig: public Animals{
	public:
		void animalSound() {
			cout << "oink oink";
		}
};

class Dog : public Animals {
	public:
		void animalSound() {
			cout << "The dog says: bow wow \n";
		}
};

int main() {
	Animals myAnimal;
	Pig myPig;
	Dog myDog;

	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	return 0;
} 

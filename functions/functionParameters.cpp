#include <iostream>
#include <string>
using namespace std;

//write all your own functions in front of the main() function, however, you can declare it above main() and define it below the main() --> organization
void helloyou(string firstName = "axel") {//this paramater will take in a string and call the variable firstName, you can add params but just add commas. here there is a default value for firstName so if i dont use a paramater it will say "hello axel"
    cout << "hello " << firstName;
}

//the void keyword says that the function does not return anything, you can use int or string or something before the function name to return something else
int sum(int x, int y) {
    return x + y;
}

//you can also use reference variables as params
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

//you can also pass arrays through the function
void printArray(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
    helloyou("jo");
    cout << "\n";
    helloyou();

    //if something returns something, you can set it to a variable or you can print it
    int fivePlusSix = sum(5, 6);

    cout << sum(18, 3);

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";
    
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printArray(myNumbers);

    return 0;
}

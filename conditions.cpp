#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    logical comparisions:
    a < b
    a > b
    a == b
    a <= b
    a >= b
    a != b
    conditional statements:
    if - specify a block of code to be executed if statement is false
    else - specify a block of code to run if statement is false
    else if - to specify a new condition to test if the first if statement is false
    switch - to specify many different codes
    */
    int legalDrinkingAge = 21;
    int age;
    cout << "what is your age: ";
    cin >> age;
    if (legalDrinkingAge < age) { 
        cout << "go drink!";
    } else if (legalDrinkingAge == age) {
        cout << "you just made it";
    } else {
        cout << legalDrinkingAge - age << " more years!";
    }

    cout << "\n";

    // a ternary operand consitis of three operands like an if else statement: (condition) ? expressionTrue : expressionFalse;
    string shortHand = (legalDrinkingAge <= age) ? "go ahead" : "not yet";
    cout << shortHand;   

    return 0;
}
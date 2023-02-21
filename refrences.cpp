#include <iostream>
#include <string>
using namespace std;

int main() {
    //a refrence just lets you make another name for a variable, you use &name = variable to make a refrence
    string food = "pizza";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";
    //the & symbol access the memory address of that certain variable
    cout << &food;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    //a pointer is similar to a reference, but it stores the memory address as its value
    //the ptr is initialized by using the datatype that you are referening to and then *
    string food = "pizza";
    string* ptr = &food;
    cout << food << "\n" << &food << "\n" << ptr;

    //if you put * infront of the pointer name, you will see the value at that memory location this is called a derefrence
    cout << "\n" << ptr << "\n"; //reference
    cout << *ptr << "\n"; //dereference

    //if you modify the pointer with dereference, it will change the variable
    *ptr = "hamburger";
    cout << *ptr << "\n" << food;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    //loop keep executing a block of code as long as a condition is reached
    //while loop loops if the condition is true
    int i = 0;
    while (i <= 5) {
        cout << "the number is now: " << i << ", " << 5 - i << " to go!\n";
        i++;
    }
    
    
    // do/while loop is a variant of the while loop. it will run a block of code and then see if the condition is true
    i = 0;
    do {
        cout << "the number is now: " << i << ", " << 5 - i << " to go!\n";
    }
    while (i != 0);
    //do while always runs once becuase it checks the condition after running

    /*
    When you know when you want a loop to stop, you will use a for loop
    this is like a while loop except you set a condition, initilize a variable and increment the variable all in one line of code
    */
    for (int y = 0; y < 5; y++) {
        cout << "hello there" << "\n";
    } //this will run n times, n being determined by i < 5 and i++, so n = 5, therefore the time complexity it O(n)
    //O(n^2) time complexity is a nested for loop becuase it runs n times for each of n in the loop:
    for ( int y = 0; y < 5; y++) {
        cout << "the muber is" << y << "\n";
        for (int j = 0; j < 3; j++) {
            cout << "nested" << j << "\n";
        }
    }
    //foreach loop will loop for how many in an array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    //break will break out of a loop
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }// this will break the loop at the 5th loop before it prints 4 (starts at 0)

    //continue will break one iteration in a loop
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }// you will se that 4 is never printed

    return 0;
}
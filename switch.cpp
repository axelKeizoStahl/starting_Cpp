#include <iostream>
#include <string>
using namespace std;

int main() {
    //switch statements is like a ton of if else if statements
    /*the switch expression is evaluated once
    the value of the expression is compared with the values of each case
    */
    int day = 4;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        }
    //break - breaks out of the case statement if there is not match
    //default - runs code if there is no match

    return 0;
}
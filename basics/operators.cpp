#include <iostream>
using namespace std;

int main() {
    //operators aer like +,-,*,/
    int x = 100 + 50;
    cout << x;

    //you can use variables too for operators
    int sum1 = x*2;
    cout << "\n" << sum1;

    /*
    along with the basic arithmetic operators there are also other ones
    % - modulus - returns the remainder
    ++ - increment
    -- - decrement
    */
    --sum1;
    cout << "\n" << sum1 << "\n";

    //use operator= to reassign something to a variable instead of adding toi it of operating on it
    x += 3;
    cout << x << "\n";


    //other operators are comparisons: ==, !=, <, >, >=, <= [these test for truth values]
    int compare1 = 10;
    double compare2 = 10.1;
    cout << (compare1 < compare2) << "\n" << (compare1 > compare2) << " \netc \n";

    /*logical operators also test for truth values
    && - and - returns true if both are true
    || - or - return true if one is true
    ! - returns true if not true
    */

    return 0;
}
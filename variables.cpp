#include <iostream>
using namespace std;

/*Here we'll talk about variables
    when declaring a variable, you must declare a type
    types:
        int: integers >> WHOLE NUMBERS
        double: floating point number, decimals
        char: stores single characters, single characters, these must be surrounded by SINGLE QUOTES
        string: this stores text, must be surrounded by DOUBLE QUOTES
        bool: stores truth values, true ot false
*/

int main() {
    // variables are declared type varname = value;
    double myFloatNum = 2.33;
    char mychar = 'A';
    string myString = "hallo";
    bool myBoolean = true;

    int myNum = 3;
    cout << myNum << "\n";

    //it doesnt need a value
    int nothin;
    nothin = 0;
    cout << nothin << "\n";

    //you can reassign variables
    myNum = 15;
    cout << myNum << "\n";

    //combine variables with a string with cout
    cout << "I am " << myNum << " years old." << "\n";

    //add variables together
    int x = 1;
    int y = 2;
    int sum = x + y;
    cout << sum << "\n";

    //make multiple varibales in one line
    int a = 1, b = 2, z = 3;
    //make them the same
    x = y = z = 50;
    cout << x + y + z;

    //you can make things a constant and it cannot be changed
    const int milesPerHour = 60;

    return 0;
}
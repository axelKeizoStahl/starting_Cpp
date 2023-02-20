#include <iostream>
#include <string> //this line will be explained bellow
using namespace std;

int main() {
    /*
    boolean - 1 byte
    char - 1byte
    int - 2 or 4 bytes
    float - 4 bytes 
    double - 8 bytes
    */
    
    /*
    use int when its an integer, and float for small decimals and double for bigger decimals
    */

    int myNum = 100;
    float myFloatNum = 10.2;
    double myDoubleNum = 10.23435876435;

    //because double has a bigger memory, there is more space you can use, and so double is better most of the time

    //there are also scientific numbers you can use
    float f1 = 35e3;
    float f2 = 12E4;

    cout << myNum << myFloatNum << myDoubleNum << f1 << f2 << "\n";
    /*
    boolean data types are true or false
    when the value you is returned, true = 1 and false = 0
    */

    bool isCodingFun = true;
    bool isYourMomFun = false;

    cout << isCodingFun << "\n"; //Outputs 1 (true)
    cout << isYourMomFun << "\n"; // outputs 0 (false)

    /*
    char data types store single characters
    this is wrapped in single quotes
    */

    char myGrade = 'A';
    cout << myGrade;

    //you can also use ASCII values
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;

    /*
    strings are not built in types and because of this we had to include the string library "#include <string>"
    you must surround strings in double quotes
    */
    string abc = "abc";
    cout << abc;

    return 0;
}
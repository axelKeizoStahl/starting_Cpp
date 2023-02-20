#include <iostream>
#include <string>
using namespace std; 
//you can ommit this line but you have to write std::cout or std::cin instead of cout and cin

int main(){
    //initialize a string value
    string greeting = "hello world";

    //concatenate a string with spaces as well
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;

    fullName = firstName + " " + lastName;
    cout << "\n";
    cout << fullName;

    cout << "\n";

    //a string is an object in C, so it contains built in function
    //append - concatonates strins with string1.append(string2)
    fullName = firstName.append(lastName);
    cout << fullName;

    cout << "\n";

    //length - find the length of the string with string.length()
    cout << "The length of your full name is: " << fullName.length();
    //string.size() does the same thig as string.legnth()

    cout << "\n";

    //you can access points or indexes of a string with []
    string getTheIndex = "abcdefghijklmnopqrstuvwxyz";
    cout << getTheIndex[0];
    cout << "\n";
    //you can change a string like this too
    getTheIndex[0] = 'a';
    cout << getTheIndex;

    cout << "\n";

    //if you use ", ', or / in a string C will misunderstand it as code, use / before any of those to stop it
    string withDoubleQuotes = "the countless number of \"Your Mom\" jokes were too much for me to handle";
    cout << withDoubleQuotes;
    //"/n" - new line; "/t" tab

    cout << "\n";

    //cin will see any whitespace as a terminating character, we use getline to get the full line
    string example;
    cout << "type full name: ";
    getline (cin, example);
    cout << "Your first name is " << example;

    return 0;
}
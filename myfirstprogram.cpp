#include <iostream> //this will let you use i/o operators and alot of normal functionality in C++
using namespace std; //import std from namespace, this allows to print stuff and take standard input.

//instead of "using namespace std;" you can use std::cout and not even use the line above

//THIS IS A SINGLE LINE COMMENT 

/*
THIS IS A MULTILINE COMMENT
*/

int main() { //int main created the main function and stuff in the curly brackets are stuff
    cout << "Hello World! \n"; //cout is used to print to the console
    cout << "I am learning C++"; //there is no new line her, you must put \n
    return 0; //this is needed to end the function
}

//C ignores whitespace, this is why I could technically write hello world like this >> int main() { cout << "Hello World"; return 0;}
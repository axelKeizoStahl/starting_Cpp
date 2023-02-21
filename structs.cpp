#include <iostream>
#include <string>
using namespace std;

int main() {
    //structures are like templates that you can add information to, it is a group of variables, but unlike an array the variables dont have to be the same type
    struct car {
        string brand;
        string model;
        int year;
    };

    //create a car structure and store it in myCar1
    car myCar1;
    myCar1.brand = "BMW"; //use . instead of [] to get elements
    myCar1.model = "X5";
    myCar1.year = 1999;

    //create a car struct and store it in myCar2
    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model =  "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /*
    arrays are a sets of values
    to declare an array you must use [] to declare the amount of things you want in your list
    */
    string car[2];
    string cars[4] = {"toyota", "BMW", "Ford", "Honda"};
    //to access an element in an array, you say array[index] index being the index of the element in the array
    cout << cars[2];
    
    cout << "\n";

    //you can do the same thin to get a change an element
    cars[2] = "Volvo";
    cout << cars[2] << "\n";

    //use for loops to iterate through the array

    for (int i = 0; i < 4; i++) {
        cout << cars[i] << "\n";
    }
    //use the foreach loop to loop through the elements in an array
    int myNumz[5] = {10, 20, 30, 40, 50};

    for (int i : myNumz) {
        cout << myNumz [i] << "\n";
    }

    //you can omit the array size --> array[8] = {1,2,3,4,5,6,7,8} is the same as array[] = {...} it is good practice to include them because it reduces errors
    //you can also just initialize the array and then put in cars later.


    //sizeof(array) will return the bitsize of the array
    int myNums[5] = {10, 20, 30, 40, 50};
    
    cout << sizeof(myNums) << "\n";
    //this returns 20 becuase the bitsize of an int is 4, and 4*5 is 20
    //dividing sizeof(array) by the sizeof(datatype of array) with give you the number of elements in the array
    cout << sizeof(myNums) / sizeof(int) << "\n";

    //when looping through an array with a for loop it is best practice to set the upper bound to the length of the number of elements in the tarray  instead of a number
    for (int i = 0; i < sizeof(myNums) / sizeof(int); i++) {
        cout << myNums[i] << "\n";
    }

    //this is the same thing as using the foreach loop

    //a MULTI-DIMENSIONAL ARRAY is an array of arrays, like a graph
    //initilize a list like this with square brackets, first the amount of arrays in the array, then the items (or more arrays) in the sub arrays
    string twoD[2][2] = {
        {"hi", "he"},
        {"hi", "he"}
    };//2d array

    string threeD[2][2][2] = {
        {
            {"yo", "no"},
            {"whoa", "bro"}
        },
        {
            {"win", "bin"},
            {"chin", "in"}
        }
    };//3d array

    //accessing elements is just using [index][index]...
    cout << twoD[1][0] << "\n";
    cout << sizeof(threeD) << sizeof(string);
    //changing elemenets is the same


    return 0;
}
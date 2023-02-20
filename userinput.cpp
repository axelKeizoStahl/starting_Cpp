#include <iostream>
using namespace std;

int main() {
    //cout --> output
    //cin --> input

    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is " << x;
    
    //notice the insertion operatot << for cout, and the extraction operator >> for cin
    //x is already initialized and cin just defines its value

    //simple calculator

    int a, y;
    int sum;
    cout << "Type a number: ";
    cin >> a;
    cout << "Type another number";
    cin >> y;
    sum = a + y;
    cout << a << " + " << y << " = " << sum;

    return 0;
}
#include <iostream>

using namespace std;

int main() {

    double x;
    double y;
    char operation;
    double value;

    cout << "Value2: ";
    cin >> x;

    cout << "Value1: ";
    cin >> y;

    cout << "Sign: ";
    cin >> operation;

        if (operation =='/') {
            value = x / y;
            cout << value;
        }

        else if (operation == '+') {
            value = x + y;
            cout << value;
        }

        else if (operation == '*') {
            value = x * y;
            cout << value;
        }

        else if (operation == '-') {
            value = x - y;
            cout << value;
        }

        else {
            cout << operation << " is not a valid sign!";
        }

}

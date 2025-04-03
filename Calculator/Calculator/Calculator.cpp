#include <iostream>
#include <string>

using namespace std;

int main()
{
    float num1;
    float num2;
    char operation;

    cout << "Welcome to the simple calculator!" << endl << endl; 
    cout << "Please enter your first number: ";

    cin >> num1;

    cout << "Please enter the operation you will like to use ( +, -, *, / ) : ";

    cin >> operation;

    cout << "Please enter your second number: ";

    cin >> num2;

    if (operation == '+') {
        cout << " Your answer is " << num1 + num2 << endl;
    }

    if (operation == '-') {
        cout << " Your answer is " << num1 - num2 << endl;
    }

    if (operation == '*') {
        cout << " Your answer is " << num1 * num2 << endl;
    }

    if (operation == '/') {
        cout << " Your answer is " << num1 / num2 << endl;
    }


}

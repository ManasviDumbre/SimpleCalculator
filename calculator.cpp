#include <iostream>
using namespace std;

int main()  {
    char operation;
    double num1, num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Number cannot be divided by zero!";
            break;

        default:
            // operation is invalid if the operator doesn't match any case
            cout << "Error! Invalid operator";
            break;
    }

    return 0;
}

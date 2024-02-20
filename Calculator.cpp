#include <iostream>
using namespace std;

// This program mimics a basic calculator, taking two integers and an operator as input and then outputting the result.
// Inputs: Two integers and an arithmetic operator (+, -, *, /)
// Process: Performs the specified arithmetic operation on the two integers
// Output: The result of the arithmetic operation or an error message for invalid inputs

int main() {
    int num1, num2;
    char op;
    cout << "Enter first number, operator, and second number: ";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero is not allowed." << endl;
        break;
    default:
        cout << "Error: Unsupported operation." << endl;
    }

    return 0;
}

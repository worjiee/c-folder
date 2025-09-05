#include <iostream>

using namespace std;

#include <cctype> // for isdigit()

using namespace std;

// Function to check if input is a number
bool isNumber(const string &s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    string input1, input2;
    int firstNumber, secondNumber, result;
    string operation;

    // Input first number
    cout << "Enter first number: ";
    cin >> input1;

    if (!isNumber(input1)) {
        cout << "You need to enter a number!";
        return 0;
    }
    firstNumber = stoi(input1);

    // Input second number
    cout << "Enter second number: ";
    cin >> input2;

    if (!isNumber(input2)) {
        cout << "You need to enter a number!";
        return 0;
    }
    secondNumber = stoi(input2);

    // Choose operation
    cout << "Choose Operation:" << endl
         << "Addition" << endl
         << "Subtraction" << endl
         << "Multiplication" << endl
         << "Division" << endl;

    cin >> operation;

    if (operation == "Addition") {
        result = firstNumber + secondNumber;
        cout << firstNumber << " + " << secondNumber << " = " << result;
    } else if (operation == "Subtraction") {
        result = firstNumber - secondNumber;
        cout << firstNumber << " - " << secondNumber << " = " << result;
    } else if (operation == "Multiplication") {
        result = firstNumber * secondNumber;
        cout << firstNumber << " x " << secondNumber << " = " << result;
    } else if (operation == "Division") {
        if (secondNumber == 0) {
            cout << "Cannot Divide By 0";
        } else {
            result = firstNumber / secondNumber;
            cout << firstNumber << " ÷ " << secondNumber << " = " << result;
        }
    } else {
        cout << "Invalid operation!";
    }

    return 0;
}
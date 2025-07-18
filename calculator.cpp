#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Function declarations
void arithmeticOperations();
void trigonometricOperations();
void logOperations();
void powerOperations();

int main() {
    int choice;

    while (true) {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Arithmetic Operation\n";
        cout << "2. Trigonometric Operation\n";
        cout << "3. Log / Log Inverse Operation\n";
        cout << "4. Power Operation\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear(); cin.ignore(10000, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1: arithmeticOperations(); break;
            case 2: trigonometricOperations(); break;
            case 3: logOperations(); break;
            case 4: powerOperations(); break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}

// ==========================
// Arithmetic Operations
// ==========================
void arithmeticOperations() {
    int option;
    float n1, n2;

    cout << "\n--- Arithmetic Menu ---\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Choose operation: ";
    cin >> option;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    switch (option) {
        case 1:
            cout << "Sum = " << n1 + n2 << endl;
            break;
        case 2:
            cout << "Difference = " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Product = " << n1 * n2 << endl;
            break;
        case 4:
            if (n2 == 0) {
                cout << "Division by zero is not allowed.\n";
            } else {
                cout << "Quotient = " << n1 / n2 << endl;
            }
            break;
        default:
            cout << "Invalid arithmetic option.\n";
    }
}

// ==========================
// Trigonometric Operations
// ==========================
void trigonometricOperations() {
    int func;
    float angle;

    cout << "\n--- Trigonometric Menu ---\n";
    cout << "1. sin\n2. cos\n3. tan\n4. cot\n5. sec\n6. cosec\n";
    cout << "Choose function (radian input): ";
    cin >> func;

    cout << "Enter angle in radians: ";
    cin >> angle;

    switch (func) {
        case 1:
            cout << "sin(" << angle << ") = " << sin(angle) << endl;
            break;
        case 2:
            cout << "cos(" << angle << ") = " << cos(angle) << endl;
            break;
        case 3:
            cout << "tan(" << angle << ") = " << tan(angle) << endl;
            break;
        case 4:
            if (tan(angle) == 0) cout << "cot undefined (tan = 0)\n";
            else cout << "cot(" << angle << ") = " << 1 / tan(angle) << endl;
            break;
        case 5:
            if (cos(angle) == 0) cout << "sec undefined (cos = 0)\n";
            else cout << "sec(" << angle << ") = " << 1 / cos(angle) << endl;
            break;
        case 6:
            if (sin(angle) == 0) cout << "cosec undefined (sin = 0)\n";
            else cout << "cosec(" << angle << ") = " << 1 / sin(angle) << endl;
            break;
        default:
            cout << "Invalid trigonometric option.\n";
    }
}

// ==========================
// Log & Inverse Log
// ==========================
void logOperations() {
    int opt;
    float num;

    cout << "\n--- Log Menu ---\n";
    cout << "1. Natural Log (log)\n2. Inverse Log (exp)\n";
    cout << "Choose option: ";
    cin >> opt;

    cout << "Enter number: ";
    cin >> num;

    switch (opt) {
        case 1:
            if (num <= 0)
                cout << "Log undefined for non-positive numbers.\n";
            else
                cout << "log(" << num << ") = " << log(num) << endl;
            break;
        case 2:
            cout << "exp(" << num << ") = " << exp(num) << endl;
            break;
        default:
            cout << "Invalid log option.\n";
    }
}

// ==========================
// Power Operation
// ==========================
void powerOperations() {
    double base, exponent;

    cout << "\n--- Power Operation ---\n";
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent << " = " << pow(base, exponent) << endl;
}

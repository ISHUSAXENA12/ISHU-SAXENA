#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    void calculate() {
        if (operation == "Addition") {
            cout << "Result: " << (a + b) << endl;
        }
        else if (operation == "Subtraction") {
            cout << "Result: " << (a - b) << endl;
        }
        else if (operation == "Multiplication") {
            cout << "Result: " << (a * b) << endl;
        }
        else if (operation == "Division") {
            if (b == 0) {
                cout << "Error: Division by zero" << endl;
            } else {
                cout << "Result: " << (a / b) << endl;
            }
        }
        else {
            cout << "Error: Invalid operation" << endl;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Enter operation (Addition, Subtraction, Multiplication, Division): ";
    cin >> op;

    Calculator calc(a, b, op);
    calc.calculate();

    return 0;
}

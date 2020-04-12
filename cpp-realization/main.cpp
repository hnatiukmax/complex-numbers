#include <iostream>
#include "math/complex/ComplexNumber.h"

using namespace std;

int main() {
    ComplexNumber firstNumber = ComplexNumber(2.0, 3.0);
    ComplexNumber secondNumber;

    cout << "Enter complex number (real, imagination):" << endl;
    cin >> secondNumber;
    cout << "firstNumber is: " << firstNumber.toString() << endl << "secondNumber is:" << secondNumber.toString() << endl << endl;

    ComplexNumber addition = (firstNumber + secondNumber);
    ComplexNumber difference = (firstNumber - secondNumber);
    ComplexNumber multiplication = (firstNumber * secondNumber);

    cout << "Addition: " << addition << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiplication: " << multiplication << endl;

    return 0;
}
//
// Created by Maxim Hnatiuk on 23.02.2020.
//

#ifndef WORKABLETEST_COMPLEXNUMBER_H
#define WORKABLETEST_COMPLEXNUMBER_H

#include <string>
#include <iostream>

class ComplexNumber {
private:
    double real, imagination;
public:
    ComplexNumber();
    explicit ComplexNumber(double real, double imagination = 0.0);


    int setReal(double real);
    int setImagination(double imag);
    double getReal();
    double getImagination();

    std::string toString();

    ComplexNumber& operator =(ComplexNumber b);

    friend ComplexNumber operator +(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber);
    friend ComplexNumber operator +(int firstNumber, ComplexNumber& secondComplexNumber);
    friend ComplexNumber operator +(ComplexNumber& firstComplexNumber, int secondNumber);

    friend ComplexNumber operator -(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber);
    friend ComplexNumber operator -(int firstNumber, ComplexNumber& secondComplexNumber);
    friend ComplexNumber operator -(ComplexNumber& firstComplexNumber, int firstNumber);

    friend ComplexNumber operator *(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber);
    friend ComplexNumber operator *(int firstNumber, ComplexNumber& secondNumber);
    friend ComplexNumber operator *(ComplexNumber& firstComplexNumber, int firstNumber);

    friend std::ostream& operator <<(std::ostream& output, ComplexNumber& complexNumber);
    friend std::istream& operator >>(std::istream& input, ComplexNumber& complexNumber);

    ~ComplexNumber();
};


#endif //WORKABLETEST_COMPLEXNUMBER_H

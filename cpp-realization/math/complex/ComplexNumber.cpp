//
// Created by Maxim Hnatiuk on 23.02.2020.
//

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() {
    this->real = 0;
    this->imagination = 0;
}

ComplexNumber::ComplexNumber(double real, double imagination) {
    this->real = real;
    this->imagination = imagination;
}


double ComplexNumber::getReal() {
    return this->real;
}

double ComplexNumber::getImagination() {
    return this->imagination;
}

int ComplexNumber::setReal(double real) {
    this->real = real;
    return 1;
}

int ComplexNumber::setImagination(double imag) {
    this->imagination = imag;
    return 1;
}

ComplexNumber& ComplexNumber::operator =(ComplexNumber b) {
    this->real = b.getImagination();
    this->imagination = b.getImagination();
    return *this;
}

std::string ComplexNumber::toString() {
    std::string sign = this->getReal() < 0 ? " - " : " + ";
    return " " + std::to_string(this->getReal()) + sign + std::to_string(this->getImagination()) + "i";
}

ComplexNumber operator +(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber) {
    ComplexNumber newComplexNumber(
            firstComplexNumber.getReal() + secondComplexNumber.getReal(),
            firstComplexNumber.getImagination() + secondComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator +(int firstNumber, ComplexNumber& secondComplexNumber) {
    ComplexNumber newComplexNumber(
            secondComplexNumber.getReal() + firstNumber,
            secondComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator +(ComplexNumber& firstComplexNumber, int secondNumber) {
    ComplexNumber newComplexNumber(
            firstComplexNumber.getReal() + secondNumber,
            firstComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator -(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber) {
    ComplexNumber newComplexNumber(
            firstComplexNumber.getReal() - secondComplexNumber.getReal(),
            firstComplexNumber.getImagination() - secondComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator -(int firstNumber, ComplexNumber& secondComplexNumber) {
    ComplexNumber newComplexNumber(
            firstNumber - secondComplexNumber.getReal(),
            secondComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator -(ComplexNumber& firstComplexNumber, int secondNumber) {
    ComplexNumber newComplexNumber(
            firstComplexNumber.getReal() - secondNumber,
            firstComplexNumber.getImagination()
    );
    return newComplexNumber;
}

ComplexNumber operator *(ComplexNumber& firstComplexNumber, ComplexNumber& secondComplexNumber) {
    double newReal = (firstComplexNumber.getReal() * secondComplexNumber.getReal()) - (firstComplexNumber.getImagination() *
                                                                                       secondComplexNumber.getImagination());
    double newImag = (firstComplexNumber.getReal() * secondComplexNumber.getImagination()) + (secondComplexNumber.getReal() *
                                                                                              firstComplexNumber.getImagination());
    ComplexNumber newComplexNumber(newReal, newImag);
    return newComplexNumber;
}

ComplexNumber operator *(int firstNumber, ComplexNumber& secondComplexNumber) {
    double newReal = (firstNumber * secondComplexNumber.getReal()) - (0 * secondComplexNumber.getImagination());
    double newImag = (firstNumber * secondComplexNumber.getImagination()) + (secondComplexNumber.getReal() * 0);
    ComplexNumber newComplexNumber(newReal, newImag);
    return newComplexNumber;
}

ComplexNumber operator *(ComplexNumber& firstComplexNumber, int secondNumber) {
    double newReal = (firstComplexNumber.getReal() * secondNumber) - (firstComplexNumber.getImagination() * 0);
    double newImag = (firstComplexNumber.getReal() * 0) + (secondNumber * firstComplexNumber.getImagination());
    ComplexNumber newComplexNumber(newReal, newImag);
    return newComplexNumber;
}

std::ostream& operator <<(std::ostream& output, ComplexNumber& complexNumber) {
    output << complexNumber.toString();
    return output;
}

std::istream& operator >>(std::istream& input, ComplexNumber& complexNumber) {
    double newReal = 0.0;
    double newImag = 0.0;
    input >> newReal >> newImag;
    complexNumber.setReal(newReal);
    complexNumber.setImagination(newImag);
    return input;
}

ComplexNumber::~ComplexNumber()
= default;

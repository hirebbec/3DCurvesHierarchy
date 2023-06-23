#include "./../include/Elipce.hpp"
#include <math.h>

Elipce::Elipce(double a, double b): a(a), b(b) {};

Elipce::Elipce(const Elipce& other): a(other.getA()), b(other.getB()) {};

Elipce& Elipce::operator=(const Elipce& other) {
    this->a = other.getA();
    this->b = other.getB();
    return *this;
}

double Elipce::getA() const {
    return a;
}

double Elipce::getB() const {
    return b;
}

Point Elipce::getPoint(double t) const {
    return Point(a * cos(t), b * sin(t), 0);
}

FirstDerivative Elipce::getFirstDerivative(double t) const {
    return FirstDerivative(-a * sin(t), b * cos(t), 0);
}
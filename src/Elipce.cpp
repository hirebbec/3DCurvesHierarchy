#include "./../include/Elipce.hpp"
#include <math.h>

Elipce::Elipce(double a, double b): a(a), b(b) {};

Elipce::Elipce(const Elipce& other): a(other.a), b(other.b) {};

Elipce::Elipce(Elipce&& other): a(other.a), b(other.b) {
    other.a = 0.0;
    other.b = 0.0;
}

Elipce& Elipce::operator=(const Elipce& other) {
    if (this != &other) {
        this->a = other.a;
        this->b = other.b;
    }
    return *this;
}

Elipce& Elipce::operator=(Elipce&& other) {
    if (this != &other) {
        this->a = other.a;
        this->b = other.b;
        other.a = 0.0;
        other.b = 0.0;
    }
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
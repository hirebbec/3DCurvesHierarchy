#include "./../include/Helix.hpp"
#include <math.h>

Helix::Helix(double r, double a): r(r), a(a) {};

Helix::Helix(const Helix& other): r(other.r), a(other.a) {};

Helix::Helix(Helix&& other): r(other.r), a(other.a) {
    other.a = 0.0;
    other.r = 0.0;
};

Helix& Helix::operator=(const Helix& other) {
    if (this != &other) {
        this->r = other.getR();
        this->a = other.getA();
    }
    return *this;
}

Helix& Helix::operator=(Helix&& other) {
    if (this != &other) {
        this->r = other.r;
        this->a = other.a;
        other.a = 0.0;
        other.r = 0.0;
    }
    return *this;
}
 
double Helix::getR() const {
    return r;
}

double Helix::getA() const {
    return a;
}

Point Helix::getPoint(double t) const {
    return Point(r * cos(t), r * sin(t), a * t / 6.28); // Not shure
}

FirstDerivative Helix::getFirstDerivative(double t) const {
    return FirstDerivative(-r * sin(t), r * cos(t), a / 6.28); // Not shure
}
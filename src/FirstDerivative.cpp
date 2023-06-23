#include "./../include/FirstDerivative.hpp"

FirstDerivative::FirstDerivative(double dx, double dy, double dz): dx(dx), dy(dy), dz(dz) {};

FirstDerivative::FirstDerivative(const FirstDerivative& other): dx(other.dx), dy(other.dy), dz(other.dz) {};

FirstDerivative::FirstDerivative(FirstDerivative&& other): dx(other.dx), dy(other.dy), dz(other.dz) {
    other.dx = 0.0;
    other.dy = 0.0;
    other.dz = 0.0;
};

FirstDerivative& FirstDerivative::operator=(const FirstDerivative& other) {
    if (this != &other) {
        this->dx = other.dx;
        this->dy = other.dy;
        this->dz = other.dz;
    }
    return *this;
}

FirstDerivative& FirstDerivative::operator=(FirstDerivative&& other) {
    if (this != &other) {
        this->dx = other.dx;
        this->dy = other.dy;
        this->dz = other.dz;
        other.dx = 0.0;
        other.dy = 0.0;
        other.dz = 0.0;
    }
    return *this;
}

double FirstDerivative::getDx() const {
    return dx;
}

double FirstDerivative::getDy() const {
    return dy;
}

double FirstDerivative::getDz() const{
    return dz;
}

std::ostream& operator<<(std::ostream& os, const FirstDerivative& derivative) {
    return os << "(" << derivative.getDx() << ", " << derivative.getDy() << ", " << derivative.getDz() << ")";
}
#include "./../include/FirstDerivative.hpp"

FirstDerivative::FirstDerivative(double dx, double dy, double dz): dx(dx), dy(dy), dz(dz) {};

FirstDerivative::FirstDerivative(const FirstDerivative& other): dx(other.getDx()), dy(other.getDy()), dz(other.getDz()) {};

FirstDerivative& FirstDerivative::operator=(const FirstDerivative& other) {
    this->dx = other.getDx();
    this->dy = other.getDy();
    this->dz = other.getDz();
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
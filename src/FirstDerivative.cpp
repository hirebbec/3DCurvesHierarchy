#include "./../include/FirstDerivative.hpp"

FirstDerivative::FirstDerivative(double dx, double dy, double dz): dx(dx), dy(dy), dz(dz) {};

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
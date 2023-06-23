#ifndef FIRSTDERIVATIVE_HPP
#define FIRSTDERIVATIVE_HPP

#include <iostream>

class FirstDerivative {
private:
    double dx;
    double dy;
    double dz;
public:
    FirstDerivative(double dx, double dy, double dz);

    FirstDerivative(const FirstDerivative& other);

    FirstDerivative& operator=(const FirstDerivative& other);

    double getDx() const;
    double getDy() const;
    double getDz() const;
};

std::ostream& operator<<(std::ostream& os, const FirstDerivative& derivative);


#endif
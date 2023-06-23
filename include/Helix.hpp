#ifndef HELIX_HPP
#define HELIX_HPP

#include "Point.hpp"
#include "FirstDerivative.hpp"

class Helix {
private:
    double r;
    double a;
public:
    Helix(double r, double a);

    Helix(const Helix& other);

    Helix& operator=(const Helix& other);

    double getR() const;
    double getA() const;

    Point getPoint(double t) const;
    FirstDerivative getFirstDerivative(double t) const;
};

#endif
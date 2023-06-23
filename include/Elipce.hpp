#ifndef ELIPCE_HPP
#define ELIPCE_HPP

#include "Point.hpp"
#include "FirstDerivative.hpp"

class Elipce {
private:
    double a;
    double b;
public:
    Elipce(double a, double b);
    
    Elipce(const Elipce& other);

    Elipce& operator=(const Elipce& other);

    double getA() const;
    double getB() const;

    virtual Point getPoint(double t) const;
    virtual FirstDerivative getFirstDerivative(double t) const;
};

#endif
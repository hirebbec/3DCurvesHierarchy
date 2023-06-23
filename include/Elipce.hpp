#ifndef ELIPCE_HPP
#define ELIPCE_HPP

#include "Curve.hpp"

class Elipce: public Curve {
private:
    double a;
    double b;
public:
    Elipce(double a, double b);
    
    Elipce(const Elipce& other);

    Elipce(Elipce&& other);

    Elipce& operator=(const Elipce& other);

    Elipce& operator=(Elipce&& other);    

    double getA() const;
    double getB() const;

    Point getPoint(double t) const override;
    FirstDerivative getFirstDerivative(double t) const override;

    ~Elipce() {};
};

#endif
#include "./../include/Circle.hpp"
#include <iostream>

int main() {
    Circle circle(3.0);

    double t = 3.1415 / 4.0;

    std::cout << circle.getPoint(t);

    std::cout << circle.getFirstDerivative(t);
}
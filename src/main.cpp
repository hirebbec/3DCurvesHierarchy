#include "./../include/Circle.hpp"
#include "./../include/Elipce.hpp"
#include "./../include/Helix.hpp"

int main() {
    Circle circle(3.0);
    Elipce elipce(5.5, 3.3);
    Helix  helix(10.0, 1.5);

    double t = 3.1415 / 4.0;

    std::cout << circle.getPoint(t) << std::endl;

    std::cout << circle.getFirstDerivative(t) << std::endl;

    std::cout << elipce.getPoint(t) << std::endl;

    std::cout << elipce.getFirstDerivative(t) << std::endl;

    std::cout << helix.getPoint(t) << std::endl;

    std::cout << helix.getFirstDerivative(t) << std::endl;
}
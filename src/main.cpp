#include "./../include/Circle.hpp"
#include "./../include/Elipce.hpp"
#include "./../include/Helix.hpp"
#include <random>
#include <vector>
#include <memory>

int main() {
    //Task 2
    /*   Populate a container (e.g. vector or list) of objects of these types 
    created in random manner with random parameters. */
    std::vector<std::shared_ptr<Curve>> curves;
    double t = 3.1415 / 4.0;
    // Инициализация генератора случайных чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    // Создание распределения
    std::uniform_real_distribution<double> dis(0.0, 10.0);
    for (int i = 0; i < 5; ++i) {
        curves.push_back(std::make_shared<Circle>(dis(gen)));
        curves.push_back(std::make_shared<Elipce>(dis(gen), dis(gen)));
        curves.push_back(std::make_shared<Helix>(dis(gen), dis(gen)));
    }

    for (const auto& curve : curves) {
        std::cout << curve->getPoint(t) << std::endl;
        std::cout << curve->getFirstDerivative(t) << std::endl;
    }           
}
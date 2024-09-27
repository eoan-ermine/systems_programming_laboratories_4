#include <iostream>

constexpr double YMax = 0.8;
constexpr double YMin = 0;

int main() {
    double X, Y;

    std::cout << "X: ";
    std::cin >> X;
    std::cout << "Y: ";
    std::cin >> Y;

    double RSquare = X * X + Y * Y;
    if (RSquare > 1) {
        std::cout << "Точка находится вне заштрихованной области" << std::endl;
    } else {
        if (Y > 0 && Y < 0.8) {
            if (RSquare == 1) {
                std::cout << "Точка лежит на границе заштрихованной области" << std::endl;
            } else {
                std::cout << "Точка лежит в заштрихованной области" << std::endl;
            }
        } else if (Y == 0 || Y == 0.8) {
            std::cout << "Точка лежит на границе заштрихованной области" << std::endl;
        } else {
            std::cout << "Точка лежит вне заштрихованной области" << std::endl;
        }
    }
}
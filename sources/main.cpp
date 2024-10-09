#include <iostream>

constexpr double YMax = 0.8;
constexpr double YMin = 0;

int main() {
    constexpr const char* OUTSIDE = "Точка лежит вне заштрихованной области";
    constexpr const char* INSIDE = "Точка лежит в заштрихованной области";
    constexpr const char* BORDERS = "Точка лежит на границе заштрихованной области";
    
    double X, Y;

    std::cout << "X: ";
    std::cin >> X;
    std::cout << "Y: ";
    std::cin >> Y;

    double RSquare = X * X + Y * Y;
    if (RSquare > 1) {
        std::cout << OUTSIDE << std::endl;
    } else {
        if (Y >= 0 && Y <= 0.8) {
            if (RSquare == 1 || Y == 0 || Y == 0.8) {
                std::cout << BORDERS << std::endl;
            } else {
                std::cout << INSIDE << std::endl;
            }
        } else {
            std::cout << OUTSIDE << std::endl;
        }
    }
}

1_exercise
  #include <iostream>
#include <cmath>

int main() {
    double x, y;

    // Введення координат x і y користувачем
    std::cout << "Введіть значення x і y: ";
    std::cin >> x >> y;

    double result;

    if (x <= 0) {
        // Перше вираз: x^2 - sin(y) для x <= 0
        result = std::pow(x, 2) - std::sin(y);
    } else {
        // Друге вираз: sqrt(x) + cos(y) для x > 0
        result = std::sqrt(x) + std::cos(y);
    }

    // Виведення результату
    std::cout << "Результат: " << result << std::endl;

    return 0;
}

2_exercise
#include <iostream>

int main() {
    double x, y;
    
    // Введення координат точки користувачем
    std::cout << "Введіть координати точки (x y): ";
    std::cin >> x >> y;

    // Перевірка, чи точка знаходиться в заштрихованій області
    if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        std::cout << "Точка знаходиться в заштрихованій області." << std::endl;
    } else {
        std::cout << "Точка не знаходиться в заштрихованій області." << std::endl;
    }

    return 0;
}

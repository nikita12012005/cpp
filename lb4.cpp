6_exercise
#include <iostream>

int main() {
    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    bool condition = (number >= 0 && number < 10) ||
                     (number * 2 < 20 && number - 2 > -2) ||
                     (number - 1 > 1 && (number - 1) / 2 < 10) ||
                     (number == 111);

    std::cout << "Результат умови: " << condition << std::endl;

    return 0;
}
7_exercise
  #include <iostream>

int main() {
    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    bool condition = (number >= 0 && number < 10) ||
                     (number * 2 < 20 && number - 2 > -2) ||
                     (number - 1 > 1 && (number - 1) / 2 < 10) ||
                     (number == 111);

    int var1 = number;
    int var2 = number * 2;
    int var3 = number - 2;
    int var4 = (number - 1) / 2;
    int var5 = 111;

    std::cout << "Значення змінних:" << std::endl;
    std::cout << "var1: " << var1 << std::endl;
    std::cout << "var2: " << var2 << std::endl;
    std::cout << "var3: " << var3 << std::endl;
    std::cout << "var4: " << var4 << std::endl;
    std::cout << "var5: " << var5 << std::endl;

    std::cout << "Результат умови: " << condition << std::endl;

    return 0;
}
8_exercise
  #include <iostream>
#include <cmath> // Для використання функції abs()

int main() {
    int num1, num2;
    
    std::cout << "Введіть перше ціле число: ";
    std::cin >> num1;
    
    std::cout << "Введіть друге ціле число: ";
    std::cin >> num2;

    // Перевірка, чи обидва числа не дорівнюють нулю
    if (num1 != 0 && num2 != 0) {
        // Перетворюємо числа на числа з плаваючою комою та обчислюємо їх зворотні значення
        double reciprocal1 = 1.0 / num1;
        double reciprocal2 = 1.0 / num2;

        // Обчислюємо абсолютну різницю між двома зворотними значеннями
        double difference = std::abs(reciprocal1 - reciprocal2);

        // Порівнюємо різницю з точністю 0.000001
        if (difference < 0.000001) {
            std::cout << "Числа відрізняються лише на невелике значення (менше 0.000001)." << std::endl;
        } else {
            std::cout << "Числа відрізняються на значення більше або рівне 0.000001." << std::endl;
        }
    } else {
        std::cout << "Обидва числа повинні бути відмінні від нуля для обчислення зворотних значень." << std::endl;
    }

    return 0;
}
9_exercise
  #include <iostream>

int main() {
    int num1, num2, num3, num4;

    std::cout << "Enter the first number (between 1 and 255): ";
    std::cin >> num1;

    std::cout << "Enter the second number (between 1 and 255): ";
    std::cin >> num2;

    std::cout << "Enter the third number (between 1 and 255): ";
    std::cin >> num3;

    std::cout << "Enter the fourth number (between 1 and 255): ";
    std::cin >> num4;

    // Check if all numbers are in the valid range
    if (num1 >= 1 && num1 <= 255 && num2 >= 1 && num2 <= 255 &&
        num3 >= 1 && num3 <= 255 && num4 >= 1 && num4 <= 255) {
        // Concatenate the numbers into an IP address
        std::cout << "IP Address: " << num1 << "." << num2 << "." << num3 << "." << num4 << std::endl;
    } else {
        std::cout << "Invalid input. Each number must be between 1 and 255." << std::endl;
    }

    return 0;
}

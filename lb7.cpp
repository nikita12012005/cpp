exercise 2.6
#include <iostream>

int main() {
    int c0;
    int steps = 0;

    std::cout << "Enter a natural number: ";
    std::cin >> c0;

    if (c0 <= 0) {
        std::cerr << "Please enter a valid natural number." << std::endl;
        return 1;
    }

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 /= 2;
        } else {
            c0 = 3 * c0 + 1;
        }

        std::cout << c0 << std::endl;
        steps++;
    }

    std::cout << "Steps needed to reach 1: " << steps << std::endl;

    return 0;
}
exercise 2.7

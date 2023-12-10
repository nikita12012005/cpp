exercisi_1
#include <iostream>
#include <algorithm>

int main() {
    const int m = 12;
    int array[m] = {5, 2, 8, 1, 7, 3, 10, 6, 12, 4, 9, 11};

    // Зростанням
    std::sort(array, array + m);

    std::cout << "Масив у висхідному порядку: ";
    for (int i = 0; i < m; ++i) {
        std::cout << array[i] << " ";
    }

    // Спаданням
    std::sort(array, array + m, std::greater<int>());

    std::cout << "\nМасив у спадаючому порядку: ";
    for (int i = 0; i < m; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}
exrcise_2
#include <iostream>

int main() {
    const int size = 10;
    int array[size] = {-2, 5, -8, 3, -1, 7, 10, -6, 12, 4};

    // Знаходження індексу першого максимального елемента
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }

    // Заміна від'ємних елементів до першого максимального нулями
    for (int i = 0; i < maxIndex; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
    }

    // Виведення зміненого масиву
    std::cout << "Масив після заміни від'ємних елементів: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}


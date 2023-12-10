#include <iostream>
#include <algorithm>

int main() {
    const int size = 8;
    int array[size] = {3, 7, 1, 9, 5, 2, 8, 4};

    // Знаходження індексів найбільшого та найменшого елементів
    int minIndex = std::min_element(array, array + size) - array;
    int maxIndex = std::max_element(array, array + size) - array;

    // Зміна місцями найбільшого і найменшого елементів
    std::swap(array[minIndex], array[maxIndex]);

    // Виведення зміненого масиву
    std::cout << "Масив після зміни місцями найбільшого і найменшого елементів: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}

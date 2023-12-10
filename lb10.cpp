exercise_1
#include <iostream>

int main() {
    const int m = 4, n = 3;
    int array[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for (int i = 0; i < m; ++i) {
        int evenCount = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        std::cout << "У рядку " << i + 1 << " кількість парних чисел: " << evenCount << std::endl;
    }

    return 0;
}
exercise_2
#include <iostream>

int main() {
    const int m = 6, n = 4;
    int array[m][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    for (int j = 0; j < n; ++j) {
        int evenCount = 0;
        for (int i = 0; i < m; ++i) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        std::cout << "У стовпчику " << j + 1 << " кількість парних чисел: " << evenCount << std::endl;
    }

    return 0;
}

exercise_3
#include <iostream>

int main() {
    const int m = 5, n = 7;
    int array[m][n] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35}
    };

    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += array[i][j];
        }
        std::cout << "Сума елементів у рядку " << i + 1 << ": " << sum << std::endl;
    }

    return 0;
}

exercise_4
#include <iostream>

int main() {
    const int m = 4, n = 6;
    int array[m][n] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24}
    };

    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += array[i][j];
        }
        std::cout << "Сума елементів у стовпчику " << j + 1 << ": " << sum << std::endl;
    }

    return 0;
}

exercise_5
#include <iostream>

int main() {
    const int m = 3, n = 4;
    int array[m][n] = {
        {5, 12, 8, 4},
        {9, 15, 7, 11},
        {3, 6, 14, 10}
    };

    int maxElement = array[0][0];
    int maxRow, maxCol;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    std::cout << "Максимальний елемент: " << maxElement << std::endl;
    std::cout << "Номер рядка: " << maxRow + 1 << ", Номер стовпчика: " << maxCol + 1 << std::endl;

    return 0;
}

exercise_6
#include <iostream>

int main() {
    const int m = 4, n = 7;
    int array[m][n] = {
        {8, 12, 5, 10, 15, 7, 3},
        {6, 9, 14, 11, 13, 4, 2},
        {18, 20, 16, 19, 17, 22, 25},
        {1, 23, 21, 24, 26, 28, 27}
    };

    int minElement = array[0][0];
    int minRow, minCol;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[i][j] < minElement) {
                minElement = array[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    std::cout << "Мінімальний елемент: " << minElement << std::endl;
    std::cout << "Номер рядка: " << minRow + 1 << ", Номер стовпчика:

exercise_15
#include <iostream>

int main() {
    const int m = 3, n = 3;
    int array[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sumMainDiagonal = 0;  // Сума по головній діагоналі
    int sumSecondaryDiagonal = 0;  // Сума по вторинній діагоналі

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            // Головна діагональ (елементи, де i = j)
            if (i == j) {
                sumMainDiagonal += array[i][j];
            }

            // Вторинна діагональ (елементи, де i + j = n - 1)
            if (i + j == n - 1) {
                sumSecondaryDiagonal += array[i][j];
            }
        }
    }

    std::cout << "Сума по головній діагоналі: " << sumMainDiagonal << std::endl;
    std::cout << "Сума по вторинній діагоналі: " << sumSecondaryDiagonal << std::endl;

    return 0;
}

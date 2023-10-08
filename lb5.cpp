1_exercise
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Введіть 5 значень x:" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Значення x #" << i << ": ";
        cin >> x;

        // Обчислення значення функції
        y = pow(sin(x), 5) + abs(5 * x - 1.5);

        cout << "Результат для x = " << x << ": " << y << endl;
    }

    return 0;
}
2_exercise
#include <iostream>

using namespace std;

int main() {
    int product = 1; // Ініціалізуємо добуток до 1

    // Проходимо через числа від 4 до 39 і додаємо до добутку ті, що кратні 4
    for (int i = 4; i < 40; i += 4) {
        product *= i;
    }

    cout << "Добуток чисел, кратних 4 і менших за 40: " << product << endl;

    return 0;
}
3_exercise
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    cout << "Введіть початок відрізку a: ";
    cin >> a;

    cout << "Введіть кінець відрізку b: ";
    cin >> b;

    cout << "Введіть крок h: ";
    cin >> h;

    cout << "x\t|\ty" << endl;
    cout << "-------------------------" << endl;

    for (double x = a; x <= b; x += h) {
        if (x >= -1 && x <= 1) {
            // ОДЗ для кореня sin(x)
            double y = sqrt(fabs(sin(x))) + pow(x, 2);
            cout << x << "\t|\t" << y << endl;
        } else {
            cout << "x = " << x << " не належить ОДЗ" << endl;
            break; // Виходимо з циклу, якщо x не належить ОДЗ
        }
    }

    return 0;
}

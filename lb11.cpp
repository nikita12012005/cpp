exercise_1
#include <iostream>

// Структура для представлення часу
struct Time {
    int hours;
    int minutes;
};

// Функція для перевірки коректності введених годин та хвилин
bool isValidTime(const Time& t) {
    return (t.hours >= 0 && t.hours < 24 && t.minutes >= 0 && t.minutes < 60);
}

// Функція для введення значень годин та хвилин
Time inputTime() {
    Time t;
    do {
        std::cout << "Введіть години: ";
        std::cin >> t.hours;
        std::cout << "Введіть хвилини: ";
        std::cin >> t.minutes;

        if (!isValidTime(t)) {
            std::cout << "Введені некоректні значення. Спробуйте ще раз." << std::endl;
        }

    } while (!isValidTime(t));

    return t;
}

// Функція для обчислення нового часу після заданої кількості хвилин
Time calculateNewTime(const Time& initialTime, int minutesToAdd) {
    Time newTime = initialTime;
    newTime.minutes += minutesToAdd;

    // Корекція годин та хвилин у випадку переповнення
    newTime.hours += newTime.minutes / 60;
    newTime.minutes %= 60;
    newTime.hours %= 24;

    return newTime;
}

// Функція для виведення часу у форматі ГГ:ХХ
void printTime(const Time& t) {
    std::cout << "Час: ";
    if (t.hours < 10) std::cout << "0";
    std::cout << t.hours << ":";
    if (t.minutes < 10) std::cout << "0";
    std::cout << t.minutes << std::endl;
}

int main() {
    // Введення початкового часу
    Time startTime = inputTime();

    // Введення кількості хвилин
    int minutesToAdd;
    std::cout << "Введіть кількість хвилин для додавання: ";
    std::cin >> minutesToAdd;

    // Обчислення та виведення нового часу
    Time newTime = calculateNewTime(startTime, minutesToAdd);
    printTime(newTime);

    return 0;
}

exercise_2
#include <iostream>

// Структура для представлення часу
struct Date {
    int hours;
    int minutes;
};

// Функція для перевірки коректності введених годин та хвилин
bool isValidTime(const Date& d) {
    return (d.hours >= 0 && d.hours < 24 && d.minutes >= 0 && d.minutes < 60);
}

// Функція для введення значень годин та хвилин
Date inputTime() {
    Date d;
    do {
        std::cout << "Введіть години: ";
        std::cin >> d.hours;
        std::cout << "Введіть хвилини: ";
        std::cin >> d.minutes;

        if (!isValidTime(d)) {
            std::cout << "Введені некоректні значення. Спробуйте ще раз." << std::endl;
        }

    } while (!isValidTime(d));

    return d;
}

// Функція для обчислення тривалості події
Date calculateEventDuration(const Date& startTime, const Date& endTime) {
    Date duration;

    // Розрахунок різниці в годинах та хвилинах
    int totalStartMinutes = startTime.hours * 60 + startTime.minutes;
    int totalEndMinutes = endTime.hours * 60 + endTime.minutes;

    int totalDurationMinutes = totalEndMinutes - totalStartMinutes;

    // Корекція годин та хвилин у випадку від'ємної тривалості
    if (totalDurationMinutes < 0) {
        totalDurationMinutes += 24 * 60; // 24 години у хвилинах
    }

    duration.hours = totalDurationMinutes / 60;
    duration.minutes = totalDurationMinutes % 60;

    return duration;
}

// Функція для виведення часу у форматі ГГ:ХХ
void printTime(const Date& d) {
    std::cout << "Тривалість події: ";
    if (d.hours < 10) std::cout << "0";
    std::cout << d.hours << ":";
    if (d.minutes < 10) std::cout << "0";
    std::cout << d.minutes << std::endl;
}

int main() {
    // Введення початкового та кінцевого часу події
    Date startTime = inputTime();
    Date endTime = inputTime();

    // Обчислення та виведення тривалості події
    Date eventDuration = calculateEventDuration(startTime, endTime);
    printTime(eventDuration);

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Ініціалізація генератора випадкових чисел
    int secretNumber = rand() % 100 + 1;  // Комп'ютер загадує число від 1 до 100
    int guess;
    int attempts = 0;

    cout << "Комп'ютер загадав число від 1 до 100. Спробуйте відгадати його." << endl;

    while (true) {
        attempts++;
        cout << "Ваше припущення: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Вітаємо! Ви відгадали число " << secretNumber << " за " << attempts << " спроб." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Більше" << endl;
        } else {
            cout << "Менше" << endl;
        }
    }

    return 0;
}

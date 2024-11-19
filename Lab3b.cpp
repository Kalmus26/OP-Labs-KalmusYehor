#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[100];
    cout << "Введіть кількість грибів: ";
    cin >> input;

    // Перевірка на коректність введених даних
    for (int i = 0; input[i] != '\0'; ++i) {
        if (input[i] < '0' || input[i] > '9') {
            cout << "Некоректні дані." << endl;
            return 0;
        }
    }

    // Перетворення рядка на ціле число
    int k = 0;
    for (int i = 0; input[i] != '\0'; ++i) {
        k = k * 10 + (input[i] - '0');
    }

    // Перевірка на додатність числа
    if (k <= 0) {
        cout << "Кількість грибів повинна бути додатним числом." << endl;
        return 0;
    }

    cout << "У мене " << k << " ";

    if (k % 10 == 1 && k % 100 != 11) {
        cout << "гриб" << endl;
    } else if (k % 10 >= 2 && k % 10 <= 4 && (k % 100 < 10 || k % 100 >= 20)) {
        cout << "гриба" << endl;
    } else {
        cout << "грибів" << endl;
    }

    return 0;
}
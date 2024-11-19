#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    cout << "Введіть число: ";
    cin >> input;

    // Перевірка на невірне введення чисел
    int start = 0;
    if (input[0] == '-') {
        cout << "Число не повинно бути від'ємним." << endl;
        return 0;
    }

    for (int i = start; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            cout << "Некоректне введення числа." << endl;
            return 0;
        }
    }

    // Перетворення рядка на ціле число
    int number = atoi(input.c_str());

    // Розрахунок кількості цифр, суми цифр, та відображення числа навпаки
    int sum = 0;
    string reversedNumber = "";
    int length = input.length();

    for (int i = 0; i < length; i++) {
        int digit = input[i] - '0';
        sum += digit;
        reversedNumber = input[i] + reversedNumber;
    }

    cout << "Число навпаки: " << reversedNumber << endl;
    cout << "Кількість цифр: " << length << endl;
    cout << "Сума цифр: " << sum << endl;

    return 0;
}
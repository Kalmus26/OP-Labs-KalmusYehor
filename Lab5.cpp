#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Ініціалізація генератора випадкових чисел

    const int SIZE = 20;
    int arr[SIZE];
    int maxElement = -50;

    // Заповнення масиву випадковими числами та пошук максимального елемента
    cout << "Початковий масив:\n";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -50 + rand() % 101; // Випадкове число в діапазоні [-50, 50]
        cout << arr[i] << " ";
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "\nМаксимальний елемент: " << maxElement << endl;

    // Заміна непарних чисел на максимальний елемент
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = maxElement;
        }
    }

    // Виведення модифікованого масиву
    cout << "Модифікований масив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
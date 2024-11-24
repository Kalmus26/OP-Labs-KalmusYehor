#include <iostream>
using namespace std;

int main() {
    const int N = 9; // Розмір матриці
    int matrix[N][N] = {0}; // Ініціалізація матриці нулями

    int number = 1; // Лічильник натуральних чисел

    // Заповнення сектора вище головної діагоналі
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            matrix[i][j] = number++;
        }
    }

    // Заповнення сектора нижче головної діагоналі
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            matrix[i][j] = number++;
        }
    }

    // Заповнення сектора вище побічної діагоналі
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            matrix[i][j] = number++;
        }
    }

    // Заповнення сектора нижче побічної діагоналі
    for (int i = 1; i < N; i++) {
        for (int j = N - i; j < N; j++) {
            matrix[i][j] = number++;
        }
    }

    // Виведення матриці
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
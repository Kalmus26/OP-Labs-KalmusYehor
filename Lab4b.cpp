#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Ініціалізація генератора випадкових чисел

    int numQuestions; // Кількість прикладів за замовчуванням
    cout << "Введіть кількість прикладів для тесту: ";
    cin >> numQuestions;

    int correctAnswers = 0;
    for (int i = 0; i < numQuestions; ++i) {
        int a = rand() % 8 + 2; // Випадкове число від 2 до 9
        int b = rand() % 8 + 2; // Випадкове число від 2 до 9
        int answer;
        
        cout << "Скільки буде " << a << " * " << b << "? ";
        cin >> answer;

        if (answer == a * b) {
            correctAnswers++;
            cout << "Правильно!" << endl;
        } else {
            cout << "Неправильно. Правильна відповідь: " << a * b << endl;
        }
    }

    cout << "Ви відповіли правильно на " << correctAnswers << " з " << numQuestions << " прикладів." << endl;

    int grade;
    if (correctAnswers == numQuestions) {
        grade = 5;
    } else if (correctAnswers >= numQuestions - 1) {
        grade = 4;
    } else if (correctAnswers >= numQuestions - 3) {
        grade = 3;
    } else {
        grade = 2;
    }

    cout << "Ваша оцінка: " << grade << endl;

    return 0;
}
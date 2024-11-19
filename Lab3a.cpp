#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;

    // Перевірка, чи є рівняння квадратним
    if (a == 0) {
        cout << "Це не є квадратне рівняння." << endl;
        return 0;
    }

    int D = b * b - 4 * a * c;
    cout << "Дискримінант (D) = " << D << endl;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Корені рівняння: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "Рівняння має один корінь: x = " << x << endl;
    } else {
        cout << "Рівняння не має дійсних коренів." << endl;
    }

    return 0;
}

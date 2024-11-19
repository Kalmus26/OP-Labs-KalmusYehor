#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Перевірка попадання у прямокутник
    bool inRectangle = (x >= -1 && x <= 1 && y >= 0 && y <= 1);

    // Перевірка попадання у півколо
    bool inSemiCircle = (x * x + y * y <= 1 && y <= 0);

    if (inRectangle || inSemiCircle) {
        cout << "Точка потрапляє в заштриховану область." << endl;
    } else {
        cout << "Точка не потрапляє в заштриховану область." << endl;
    }

    return 0;
}

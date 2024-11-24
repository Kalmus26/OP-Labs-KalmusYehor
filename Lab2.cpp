#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    
    string name1, name2, name3;
    float resistance1, resistance2, resistance3;
    float tempCoeff1, tempCoeff2, tempCoeff3;
    int maxTemp1, maxTemp2, maxTemp3;

    
    cout << "1. Введите: название, сопротивление, температурный коэффициент, максимальную температуру > ";
    cin >> name1 >> resistance1 >> tempCoeff1 >> maxTemp1;

    
    cout << "2. Введите: название, сопротивление, температурный коэффициент, максимальную температуру > ";
    cin >> name2 >> resistance2 >> tempCoeff2 >> maxTemp2;

    
    cout << "3. Введите: название, сопротивление, температурный коэффициент, максимальную температуру > ";
    cin >> name3 >> resistance3 >> tempCoeff3 >> maxTemp3;

    
    printf("---------------------------------------------\n");
    printf("|           Сплави з високим опором          |\n");
    printf("|-------------------------------------------|\n");
    printf("|   Сплав    |   Опір   | Температурний коеф. | Макс. темп. |\n");
    printf("|            | (ом*кв.мм/м) | опору (1/град)  | (град.С)   |\n");
    printf("|------------|----------|--------------------|-------------|\n");
    
    printf("| %10s | %8.2f | %18.5f | %11d |\n", name1.c_str(), resistance1, tempCoeff1, maxTemp1);
    printf("| %10s | %8.2f | %18.2f | %11d |\n", name2.c_str(), resistance2, tempCoeff2, maxTemp2);
    printf("| %10s | %8.2f | %18.4f | %11d |\n", name3.c_str(), resistance3, tempCoeff3, maxTemp3);
    
    printf("|-------------------------------------------|\n");
    printf("| Одиниці вимірювання: опір – ом*кв.мм/м;    |\n");
    printf("| температурний коеф. опору – 1/град;        |\n");
    printf("| температура – град. С                       |\n");
    printf("---------------------------------------------\n");

    return 0;
}
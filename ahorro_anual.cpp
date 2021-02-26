#include <iostream>
using namespace std;

int main() {

    double ahorro = 0.03;
    double acumulado = 0;

    for (int i = 0; i < 365; ++i) {

        acumulado = acumulado + ahorro;

        cout << "Ahorro del día "<< (i+1) << ": "<< acumulado << endl;

        ahorro = acumulado * 3;
    }

    cout << "total ahorrado en el año: $" << acumulado << endl;

    return 0;
}
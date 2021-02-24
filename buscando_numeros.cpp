#include <iostream>
using namespace std;

int main() {

    float cantidad=0, menoresA=0, igualesA=0, mayoresA=0, valor=0;

    cout << " ¿Cuántas cantidades desea capturar?"<< endl;
    cin >> cantidad;

    for (int i = 1; i <= cantidad; ++i) {

        cout << "Ingrese la cantidad: "<< i << endl;
        cin >> valor;

        if( valor < 0 ){
            menoresA = menoresA +1;
        }
        if( valor == 0){
            igualesA++;
        }
        if( valor > 0){
            mayoresA = mayoresA +1;
        }

    }

    cout << "Cantidades menores a 0: " << menoresA << endl;
    cout << "Cantidades iguales a 0: "<< igualesA << endl;
    cout << "Cantidades mayores a 0: " << mayoresA << endl;

    return 0;
}
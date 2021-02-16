#include <iostream>
using namespace std;

const float PI = 3.1416;
int main() {

    int op = 0;
    float num1 =0, num2 = 0, result = 0;

    cout << "Seleccione la opción que desea operar" <<endl;
    cout << "=== 1.- Cuadrado ===" << endl;
    cout << "=== 2.- Rectángulo ===" << endl;
    cout << "=== 3.- Triangulo ===" << endl;
    cout << "=== 4.- Circulo === " << endl;

    cin >> op;

    if( op == 1 ){ // cuadrado
        cout << "Ingrese el valor un lado del cuadrado"<<endl;
        cin >> num1;

        result = num1 * num1;
        cout << "El resultado es: " << result;
    }
    if( op == 2 ){ // rectángulo
        cout << "Ingrese la base del rectangulo" << endl;
        cin >> num1;

        cout << "Ingrese al altura del rectangulo" << endl;
        cin >> num2;

        result = num1 * num2;
        cout << "El resultado es: "<< result << endl;
    }
    if( op == 3){ // trigangulo
        cout << "Ingrese la base del triguanlo" << endl;
        cin >> num1;

        cout << "Ingrese la altura del triangulo" << endl;
        cin >> num2;

        result = (num1 * num2) / 2;
        cout << "El resultado es: "<< result << endl;
    }
    if( op == 4 ){ // circulo
        cout << "Ingrese el radio del cirulo" << endl;
        cin >> num1;

        result = PI * ( num1 * num1 );
        cout << "El resultado es: " << result << endl;
    }



    return 0;
}
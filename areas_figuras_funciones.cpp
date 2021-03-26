#include <iostream>
using namespace std;

double rect()
{
    double a,b,c;

    cout << "Ingrese la base de la figura"<<endl;
    cin >> a;

    cout << "Ingrese la altura de la figura"<<endl;
    cin >> b;

    c = a * b;
    return c;
}

double cuadrado()
{
    double a,c;

    cout << "Ingrese la base de la figura"<<endl;
    cin >> a;

    c = a * a;
    return c;
}

double triangle(){
    double a,b,c;

    cout << "Ingrese la base de la figura"<<endl;
    cin >> a;

    cout << "Ingrese la altura de la figura"<<endl;
    cin >> b;

    c = (a * b) / 2;
    return c;
}

double circulo(){
    double a,c;

    cout << "Ingrese el radio de la figura"<<endl;
    cin >> a;

    c = (3.1416) * (a * a);
    return c;
}

int main() {

    int op=0;
    double result=0;

    cout << "Seleccione la opción a operar" << endl;
    cout << "1.- Rectángulo,\n"
            "2.- Cuadrado,\n"
            "3.- Triángulo,\n"
            "4.- Círculo."<<endl;
    cin >> op;

    switch (op) {
        case 1:
            result = rect();
            break;
        case 2:
            result = cuadrado();
            break;
        case 3:
            result = triangle();
            break;
        case 4:
            result = circulo();
            break;
    }
    cout << "El resultado es: " << result << endl;

    return 0;
}


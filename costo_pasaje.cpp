#include <iostream>
using namespace std;

int main() {

    float pasajeros=0,kms=0,result=0,price=0;
    char category;

    cout << "¿Qué categoría de Autobús tomarán?"<<endl;
    cin >> category;

    cout << "Ingrese por favor el número de pasajeros"<<endl;
    cin >> pasajeros;

    cout << "¿Cuántos kilómetros recorrerá?"<<endl;
    cin >> kms;

    if(category == 'A' or category == 'a'){
        price = 2;
    }

    if(category == 'B' or category == 'b'){
        price = 2.5;
    }

    if(category == 'C' or category == 'c'){
        price = 3;
    }

    if(pasajeros<=20){
        pasajeros = 20;
    }

    result = ((price * pasajeros) * kms);

    cout << "El costo del viaje y autobús son de: $"<< result << endl;
    cout << "El costo por persona es de: $"<< (result / pasajeros ) << endl;

    return 0;
}
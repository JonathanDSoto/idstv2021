#include <iostream>
using namespace std;

int main() {
    int quantity = 0, control=0;
    char type;
    double subtotal=0, grantotal=0;

    cout << "¿Cuántas hamburguesas quiere?"<<endl;
    cin >> quantity;

    while(control < quantity){

        cout << "Ingrese el tipo de la hamburguesa "<< control+1 << endl;
        cout << "sencillas (S), dobles (D) y triples (T)"<<endl;
        cin >> type;

        if(type == 's' || type == 'S'){
            subtotal += 20;
        }
        if(type == 'd' || type == 'D'){
            subtotal += 25;
        }
        if(type == 't' || type == 'T'){
            subtotal += 28;
        }

        control++;
    }
    cout << "El total sin el cargo de la tarjeta es de: $"<<subtotal<<endl;
    cout << "El total con el cargo de la tarjeta es de: $"<< subtotal + (subtotal*0.05)<<endl;

    return 0;
}
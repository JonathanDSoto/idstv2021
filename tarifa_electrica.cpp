#include <iostream>
using namespace std;

int main() {

    float kw=0,temporada=0,base_cost=0;

    cout << "¿Cuál es el consumo total de kilowatts?" << endl;
    cin >> kw;

    cout << "Ingrese por favor el número de temporada" << endl;

    cout << "1.-Primavera: 1 marzo hasta 31 mayo" << endl;
    cout << "2.-Verano: 1 junio hasta 31 agosto" << endl;
    cout << "3.-Otoño: 1 septiembre hasta 30 noviembre" << endl;
    cout << "4.-Invierno: 1 diciembre hasta 28 febrero" << endl;

    cin >> temporada;

    if( kw<=75 ){ //si es menos de 75 entra aquí
        base_cost = (kw * 0.793); //multiplicamos todos los kw x el costo
    }

    if( kw > 75 ){
        kw = kw - 75; //restando los primeros 75 kw

        if(kw<=65){ // si es menor o igual a 65 entra aquí
            base_cost = ( 75 *  0.793) + ( kw * 0.956 );
        }

        if(kw>65){ //si es mayor a 65 entra aquí
            kw = kw-65;
            base_cost = ( 75 *  0.793) + ( 65 * 0.956 ) + ( kw * 2.802 );
        }

    }

    cout << "El costo base es de: $"<< base_cost << endl;

    if(temporada == 2 || temporada == 4){

        base_cost = base_cost + (base_cost * 0.25);
        cout << "El costo con el aumento de temporada es de: $"<< base_cost << endl;

    }else{
        cout << "No hay aumento por temporada"<<endl;
    }

    base_cost = base_cost - (base_cost * 0.60);
    cout << "El costo con el apoyo del subsidio es de: $"<< base_cost<<endl;

    return 0;
}
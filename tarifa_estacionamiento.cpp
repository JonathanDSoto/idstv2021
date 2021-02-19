#include <iostream>
using namespace std;

int main() {

    float result=0, horas=0, precio=0;
    int horasSinDescuento=0;
    int descuentoCuatroHoras=0;

    cout << "Ingrese la cantidad de horas"<<endl;
    cin >> horas;

    cout << "Ingrese el precio por hora"<<endl;
    cin >> precio;

    if(horas > 8){

        horasSinDescuento = horas - 4;
        descuentoCuatroHoras = ((4 * precio) * 0.10); 

        result = (horasSinDescuento*precio) + ( 4 * precio ) - descuentoCuatroHoras;


    }else{
        result = horas * precio;
    }

    cout << "El total es de: $"<< result << endl;

    return 0;
}
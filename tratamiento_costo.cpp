#include <iostream>
using namespace std;

int main() {

    float date_number=0,result=0,rate=0;

    cout << "¿Cuál es el número de su cita?"<<endl;
    cin >> date_number;

    if(date_number <=3 ){ // si es menor o igual a tres
        rate = 200;
        result = date_number * rate;
    }
    if(date_number >= 4 && date_number <= 5){ // entre 4 y 5
        rate = 150;
        result = ((date_number-3) * rate) + 600 ;
    }
    if (date_number >=6 && date_number <= 8){ // entre 6 y 8
        rate = 100;
        result = ((date_number-5) * rate) + 600 + 300;
    }
    if(date_number > 8 ){ // mayor a 8
        rate = 50;
        result = ((date_number-8) * rate) + 600 + 300 + 200;
    }

    cout  << "El costo de su cita es de: $" << rate << ".00" << endl;
    cout << "El costo de su tratamiento ha sido de: $" << result << ".00 MXN"<<endl;

    return 0;
}
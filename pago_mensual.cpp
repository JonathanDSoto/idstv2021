#include <iostream>
using namespace std;

int main() {

    int control =0;
    double adeudo=10, total=0;

    while(control<20){

        cout << "Cantidad del pago " << control + 1 << ":" << endl;
        cout << adeudo <<endl;

        total += adeudo;
        adeudo = adeudo * 2;
        control++;
    }
    cout << "El total que pago el cliente: " << total << endl;

    return 0;
}
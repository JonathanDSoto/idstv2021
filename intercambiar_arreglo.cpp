#include <iostream>
using namespace std;

int main() {

    int arreglo[6] = {0};
    int tmp = 0, x = 5,c = 0;

    for (int i = 0; i < 6; ++i) {
        cout << "Ingrese un valor:"<<endl;
        cin >> arreglo[i];
    }

    for (int i = 0; i < 6; ++i) {
        cout << "[" << arreglo[i] <<"]";
    }
    cout << endl;

    while(c<3){
        tmp = arreglo[x];
        arreglo[x] = arreglo[c];
        arreglo[c] = tmp;
        x--;
        c++;
    }

    /*tmp = arreglo[5];
    arreglo[5] = arreglo[0];
    arreglo[0] = tmp;

    tmp = arreglo[4];
    arreglo[4] = arreglo[1];
    arreglo[1] = tmp;

    tmp = arreglo[3];
    arreglo[3] = arreglo[2];
    arreglo[2] = tmp;*/

    for (int i = 0; i < 6; ++i) {
        cout << "[" << arreglo[i] <<"]";
    }
    cout << endl;

    return 0;
}
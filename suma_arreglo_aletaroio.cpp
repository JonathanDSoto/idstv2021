#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    srand (time(NULL));
    int arreglo[10] = {0}, c=0, sumatoria=0;

    //Generando 10 números aleatorios
    for (int i = 0; i < 10; ++i) {
        arreglo[i] = (rand() % 100 + 1);
    }

    //mostrarlos e ir acumulando
    while(c<10){
        cout << arreglo[c] << ", ";
        sumatoria += arreglo[c];
        c++;
    }

    cout << endl << "Total: " << sumatoria << endl;

    return 0;
}
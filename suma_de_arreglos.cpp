#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    srand (time(NULL));
    int arregloA[10] = {0}, arregloB[10] = {0};
    int arregloC[10] = {0};

    for (int i = 0; i < 10; ++i) {
        arregloA[i] = rand() % 100 + 1;
        cout << "[" << arregloA[i] << "]";
    }
    cout << endl;

    for (int i = 0; i < 10; ++i) {
        arregloB[i] = rand() % 90 + 10;
        cout << "[" << arregloB[i] << "]";
    }
    cout << endl;

    for (int i = 0; i < 10; ++i) {
        arregloC[i] = arregloA[i] + arregloB[i];
        cout << "[" << arregloC[i] << "]";
    }

    return 0;
}
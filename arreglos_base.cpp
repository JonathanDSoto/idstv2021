#include <iostream>
using namespace std;

int main() {

    int arreglo[10] ={ 1,2,3,4,5,6,7,8,9,0 };
    int arreglo2[] = {1,2,3};
    int arreglo3[10] = {1,2,3,4,5};
    int arreglo4[100] = {0};
    char palabra[100] = {'H','o','L','a'};

    arreglo4[0] = 1;
    arreglo4[1] = 2;
    arreglo4[2] = 3;
    arreglo4[3] = 4;
    arreglo4[4] = 5;
    arreglo4[5] = 6;
    arreglo4[6] = 7;
    arreglo4[7] = 8;
    arreglo4[8] = 9;
    arreglo4[9] = 10;

    cout << arreglo4[7]<<endl;

    for (int i = 0; i < 10; ++i) {
        arreglo3[i] = ( i +1 );
    }
    cout << arreglo3[4]<<endl;

    return 0;
}
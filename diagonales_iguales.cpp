#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {

    //int contador = 0;
    bool flag = true;
    srand (time(NULL));
    int matrizA[12][12] = {0}, matrizB[12][12] = {0};

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            matrizA[i][j] = rand() %9 +1;
            matrizB[i][j] = rand() %9 +1;
        }
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "[" << matrizA[i][j] << "]";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << "[" << matrizB[i][j] << "]";
        }
        cout << endl;
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if(i==j){
                /*if(matrizA[i][j] == matrizB[i][j]){
                    contador++;
                }*/
                if(matrizA[i][j] != matrizB[i][j]){
                    flag = false;
                }
            }
        }
    }

    /*if(contador == 12){
        cout << "Ambas diagonales son iguales" << endl;
    }else{
        cout << "Las diagonales no son iguales"<<endl;
    }*/

    if(flag == true){
        cout << "Ambas diagonales son iguales" << endl;
    }else{
        cout << "Las diagonales no son iguales"<<endl;
    }

    return 0;
}
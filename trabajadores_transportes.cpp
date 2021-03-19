#include <iostream>
using namespace std;

int main() {

    string nombres[5] = {"  Pablo ","  Juan  "," Andres "," Miguel "," Ignacio"};
    int horas[5][6] = {{5,2,6,7,7,3},
                       {8,8,4,2,3,1},
                       {7,2,6,1,3,5},
                       {3,5,2,8,7,4},
                       {5,1,7,3,3,1}};
    int precio[5] = { 23, 34, 45, 21, 50};
    int horas_total=0, nomina = 0, masActivo = 0, indice = 0;
    cout << "[ Nombre ],[L],[M],[M],[J],[V],[S],[$$]" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "["<< nombres[i] << "] ";
        for (int j = 0; j < 6; ++j) {
            cout << "[" << horas[i][j] << "],";
        }
        cout << "[" << precio[i] << "]";
        cout << endl;
    }

    cout << endl << "---Horas trabajadas---" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "["<< nombres[i] << "] ";
        for (int j = 0; j < 6; ++j) {
            horas_total += horas[i][j] ;
        }
        cout << " "<< horas_total<< " horas" <<  endl;
        horas_total = 0;
    }

    cout << endl << "---Sueldo semanal---" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "["<< nombres[i] << "] ";
        for (int j = 0; j < 6; ++j) {
            horas_total += horas[i][j] ;
        }
        cout << " $"<< horas_total * precio[i] << ".00 " <<  endl;
        nomina += (horas_total * precio[i]);
        horas_total = 0;
    }
    cout << endl << "---Total a pagar de la empresa---"<<endl;
    cout << "total: $" << nomina << ".00"<< endl;

    cout << endl << "---Trabajador mas activo el dia lunes---" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 1; ++j) {
            if(horas[i][j] > masActivo){
                masActivo = horas[i][j];
                indice = i;
            }
        }
    }
    cout << "Nombre: " << nombres[indice]  <<endl;
    cout << "Horas trabajadas:" << masActivo << " horas" <<  endl;

    return 0;
}
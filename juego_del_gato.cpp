#include <iostream>
#include <string.h>
using namespace std;

void pintaTablero(char matriz[3][3]){
    cout << "   0  1  2" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(j==0){ cout << i << " "; }
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }
}

bool buscarGanador(char tablero[3][3]){
    if(tablero[0][0] == tablero[0][1] && tablero[0][1] == tablero[0][2] && tablero[0][0]!=' '){
        return false;
        pintaTablero(tablero);
    }
    if(tablero[1][0] == tablero[1][1] && tablero[1][1] == tablero[1][2] && tablero[1][0]!=' '){
        return false;
        pintaTablero(tablero);
    }
    if(tablero[2][0] == tablero[2][1] && tablero[2][1] == tablero[2][2] && tablero[2][0]!=' '){
        return false;
        pintaTablero(tablero);
    }

    if(tablero[0][0] == tablero[1][0] && tablero[1][0] == tablero[2][0] && tablero[0][0]!=' '){
        return false;
        pintaTablero(tablero);
    }
    if(tablero[0][1] == tablero[1][1] && tablero[1][1] == tablero[2][1] && tablero[0][1]!=' '){
        return false;
        pintaTablero(tablero);
    }
    if(tablero[0][2] == tablero[1][2] && tablero[1][2] == tablero[2][2] && tablero[0][2]!=' '){
        return false;
        pintaTablero(tablero);
    }

    if(tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0]!=' '){
        return false;
        pintaTablero(tablero);
    }

    if(tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2]!=' '){
        return false;
        pintaTablero(tablero);
    }

    return true;
}

bool validar(int a, int b, char tablero[3][3]){

    if(a>=0 && a<=2 && b>=0 && b<=2){
        if(tablero[a][b]==' '){
            return true;
        }
    }
    return false;
}

int main() {

    char tablero[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
    bool game = true, turno = true, empate = false;
    int x,y, tiros = 0;

    while(game == true){

        //1.- mostrar tablero
        pintaTablero(tablero);

        //2.- Pedir coordenadas
        cout << "X" << endl;
        cin >> x;
        cout << "Y" << endl;
        cin >> y;

        //3.- Validar coordenadas

        if(validar(x,y,tablero)){

            //2.5 Utilizar turnos
            if(turno == true){
                tablero[x][y] = 'X';
                turno = false;
            }else{
                tablero[x][y] = 'O';
                turno = true;
            }

            tiros++;
        }

        //4.- Buscar ganadores
        game = buscarGanador(tablero);

        //5.- Empate
        if(tiros==9){
            if(game==true){
                game = false;
                empate = true;
                pintaTablero(tablero);
            }
        }


    }

    if(empate == false){
        cout << "FELICIDADES"<<endl;
        if(turno == true){
            cout << "    O  "<<endl;
        }else{
            cout << "    X  "<<endl;
        }
    }else{
        cout << "EMPATE"   << endl;
    }


    return 0;
}


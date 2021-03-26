#include <iostream>
using namespace std;

void rombo(){
    
    int n=0, x =0;
    cout << "Ingrese la altura de la figura" <<endl;
    cin >> n;
    x = n;

    for (int i = 0; i < n; ++i) {
        for (int j = x; j >= 0; --j) {
            cout << " ";
        }
        for (int j = 0; j < i+1; ++j) {
            cout << "* ";
        }
        cout << endl;
        x--;
    }

    x = n-1;
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < i+3; ++j) {
            cout << " ";
        }
        for (int j = 0; j < x; ++j) {
            cout << "* ";
        }
        cout << endl;
        x--;
    }
}

int main() {

    int op=0;

    cout << "Ingrese la opción a realizar"<<endl;
    cout << "1.-Rombo de N altura,\n"
            "3.-Cuadrado sin relleno de N x N,\n"
            "4.-Triángulo."<<endl;
    cin >> op;

    switch(op){
        case 1:
            rombo();
            break;

    }

    return 0;
}


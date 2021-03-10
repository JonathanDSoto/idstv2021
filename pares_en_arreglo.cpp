#include <iostream>
using namespace std;

int main() {

    int c = 0, x = 0;
    int pares[50] = {0};

    while(c<100){
        if( (c+1) % 2 == 0 ){
            pares[x] = (c+1);
            x++;
        }
        c++;
    }

    for (int i = 0; i < 50; ++i) {
        cout << pares[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int impares[50] = {0};
    int c = 49, x = 0;

    for (int i = 0; i < 100; ++i) {
        if( (i+1) % 2 != 0 ){
            impares[x] = (i+1);
            x++;
        }
    }

    while(c >= 0){
        cout << impares[c] << endl;

        c--;
    }

    return 0;
}
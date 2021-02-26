#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float number=0, result=1, fNumber=0, exp=0;

    cout << "Exponente de la función:"<<endl;
    cin >> number;

    for (int i = 0; i < number; ++i) {

        fNumber = 1;
        for (int j = 1; j <= (i+1); ++j) {
            fNumber = fNumber * j;
        }

        exp = pow(number , (i+1) );

        result += ( exp / fNumber );
        
    }

    cout << "Resultado de la funcion: " << result << endl;

    return 0;
}
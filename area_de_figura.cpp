#include <iostream>
using namespace std;

int main() {

    float a=0, b=0, c=0,d=0, areaRectangulo=0 , areaTriangulo=0;

    cout << "Ingrese el valor de A"<<endl;
    cin >> a;

    cout << "Ingrese el valor de B"<<endl;
    cin >> b;

    cout << "Ingrese el valor de C"<<endl;
    cin >> c;

    areaRectangulo = b * c;

    d = a - c;

    areaTriangulo = ( b * d / 2 );

    cout << "El resultado es: "<< (areaRectangulo + areaTriangulo) << endl;

    return 0;
}
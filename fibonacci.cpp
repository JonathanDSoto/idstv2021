#include <iostream>
using namespace std;

int main() {

    int n1=0,n2=1,n3=0,n4=0;

    cout << " ¿Hasta qué número desea llegar?"<<endl;
    cin >> n4;

    cout << "0, ";

    for (int i = 0; i < n4; ++i) {

        n3 = n2 + n1;

        cout << n3 << ", ";

        n2 = n1;
        n1 = n3;

    }

    return 0;
}
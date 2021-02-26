#include <iostream>
using namespace std;

int main() {

    float articles=0, price, result=0;

    cout << "Ingrese número de artículos:"<<endl;
    cin >> articles;

    for (int i = 0; i < articles; ++i) {
        cout << "Precio por articulo " << (i+1)<< ":"<<endl;
        cin >> price;

        if(price>=200){
            price = (price - ( price*0.15 ));
            cout << "Descuento 15%"<<endl;
        }else{
            if(price>=100 && price <200){
                price = (price - ( price*0.12 ));
                cout << "Descuento 12%" << endl;
            }else{
                if(price < 100){
                    price = (price - ( price*0.10 ));
                    cout << "Descuento 10%" << endl;
                }
            }
        }

        cout << "Precio con descuento: $" << price <<  ".00"<<endl;
        result = result + price;
    }

    cout << "Total a pagar: $"<< result <<".00"<<endl;
    return 0;
}
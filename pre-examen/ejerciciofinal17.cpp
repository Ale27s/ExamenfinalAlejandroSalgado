//Alejandro salgado
#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Ingresa el primer numero (x): ";
    cin >> x;
    cout << "Ingresa el segundo numero (y): ";
    cin >> y;

    cout << "Antes del intercambio: x = " << x << ", y = " << y << endl;

    intercambiar(x, y);

    cout << "Despues del intercambio: x = " << x << ", y = " << y << endl;

    return 0;
}

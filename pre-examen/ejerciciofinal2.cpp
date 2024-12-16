//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    double radio;
    const double pi = 3.1416;

    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    cout << "Area: " << pi * radio * radio << endl;
    cout << "Circunferencia: " << 2 * pi * radio << endl;

    return 0;
}

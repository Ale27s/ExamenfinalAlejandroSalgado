//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Verificacion de estado del orden" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    cout << "Orden ascendente: " << (num1 < num2 && num2 < num3 ? "Si" : "No") << endl;
    cout << "Orden descendente: " << (num1 > num2 && num2 > num3 ? "Si" : "No") << endl;
    cout << "Desordenado: " << (!(num1 < num2 && num2 < num3) && !(num1 > num2 && num2 > num3) ? "Si" : "No") << endl;

    return 0;
}

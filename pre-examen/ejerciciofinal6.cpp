//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    double referencia;
    double num1, num2, num3, num4, num5;

    cout << "Verificacion de numero de si son mayores al referenciado" << endl;
    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "Ingrese el cuarto numero: ";
    cin >> num4;
    cout << "Ingrese el quinto numero: ";
    cin >> num5;

    bool todosMayores = (num1 > referencia) && (num2 > referencia) && (num3 > referencia) && (num4 > referencia) && (num5 > referencia);

    cout << "Todos los numeros son mayores que " << referencia << ": " << (todosMayores ? "Si" : "No") << endl;

    return 0;
}

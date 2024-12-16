//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Ejercicio de comparacion" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El numero mayor es: " << (num1 > num2 ? num1 : num2) << endl;
    cout << "Son iguales: " << (num1 == num2 ? "sí" : "no") << endl;

    return 0;
}

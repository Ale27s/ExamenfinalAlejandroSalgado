//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;

    cout << "Menu de operaciones matematicas:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "Resultado de la suma: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "Resultado de la resta: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "Resultado de la multiplicacion: " << resultado << endl;
            break;
        case 4:
            resultado = num1 / num2;
            cout << "Resultado de la divicion: " << resultado << endl;
            break;
        default:
            cout << "Opcion invalida. Por favor elige una opcion del 1 al 4." << endl;
    }

    return 0;
}

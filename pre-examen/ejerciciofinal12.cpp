//Alejandro salgado
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        cout << "Menu de opciones:" << endl;
        cout << "1. Calcular el cuadrado de un numero" << endl;
        cout << "2. Calcular el cubo de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa un numero: ";
                cin >> numero;
                cout << "El cuadrado de " << numero << " es: " << pow(numero, 2) << endl;
                break;
            case 2:
                cout << "Ingresa un numero: ";
                cin >> numero;
                cout << "El cubo de " << numero << " es: " << pow(numero, 3) << endl;
                break;
            case 3:
                cout << "   " << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor elige una opcion valida." << endl;
        }
        cout << endl;
    } while (opcion != 3);

    return 0;
}

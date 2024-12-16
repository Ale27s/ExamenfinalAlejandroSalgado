//Alejandro salgado
#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    cout << "Ingresa los numeros para sumar y luego ingresa un numero negativo para terminar la suma." << endl;

    while (true) {
        cout << "Ingresa el numero: ";
        cin >> numero;

        if (numero < 0) {
            break;
        }

        suma += numero;
    }

    cout << "La suma de todos los numeros es: " << suma << endl;

    return 0;
}

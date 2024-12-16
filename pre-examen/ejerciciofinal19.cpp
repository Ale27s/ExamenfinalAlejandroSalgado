//Alejandro salgado
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra, palabraEncriptada = "";
    int clave;

    cout << "Ingresa una palabra para encriptar: ";
    cin >> palabra;

    do {
        cout << "Ingresa una clave del (1-5): ";
        cin >> clave;
    } while (clave < 1 || clave > 5);

    for (char letra : palabra) {
        palabraEncriptada += char(letra + clave);
    }

    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}

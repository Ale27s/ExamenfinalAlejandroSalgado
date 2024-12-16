//Alejandro salgado
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabraEncriptada;

    cout << "Ingresa la palabra encriptada: ";
    cin >> palabraEncriptada;

    cout << "Posibles palabras desencriptadas:" << endl;

    for (int clave = 1; clave <= 5; clave++) {
        string palabraDesencriptada = "";
        for (char letra : palabraEncriptada) {
            palabraDesencriptada += char(letra - clave);
        }
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }

    return 0;
}

//Alejandro salgado
#include <iostream>
using namespace std;

int calcularSuma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout <<"suma de enteros"<<endl;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    int suma = calcularSuma(num1, num2);
    cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

    return 0;
}

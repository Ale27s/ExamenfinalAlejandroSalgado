//Alejandro salgado
#include <iostream>
using namespace std;

void calcularMayor(int a, int b, int c, int &mayor) {
    mayor = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int num1, num2, num3, mayor;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    calcularMayor(num1, num2, num3, mayor);

    cout << "El mayor de los numeros ingresados es: " << mayor << endl;

    return 0;
}

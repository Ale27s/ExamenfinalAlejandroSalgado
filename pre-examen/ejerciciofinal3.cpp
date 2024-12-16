//Alejandro salgado
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double num1, num2, num3, promedio, mayor, menor;

    cout <<"Ejeccicio de promedio, mayor y menor"<<endl;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    cout << "Ingresa el tercer numero: ";
    cin >> num3;

    promedio = (num1 + num2 + num3) / 3;
    mayor = max({num1, num2, num3});
    menor = min({num1, num2, num3});
    double diferencia = mayor - menor;

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre el mayor y el menor: " << diferencia << endl;

    return 0;
}

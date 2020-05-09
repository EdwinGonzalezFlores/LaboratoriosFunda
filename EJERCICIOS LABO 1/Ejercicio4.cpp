#include <iostream>

using namespace std;

int main(void)
{
    string name_prod;
    float precio;
    int cantidad;
    float costo;

    cout << endl << "Por favor introduce el nombre del producto comprado: " << endl;
    cin >> name_prod;
    cout << endl << "Introduce el costo unitario de " << name_prod << ":" << endl << "$";
    cin >> precio;
    cout << endl << "Cantidad que compraste: " << endl;
    cin >> cantidad;

    cout << "Tu compra: " << endl << "Producto: " << name_prod << endl;
    cout << "Precio unitario: " << "$" << precio << endl << "Cantidad comprada: " << cantidad << endl;
    costo = (precio*cantidad);
    cout << "Tu total de gastos es: $" << costo;
    cout << endl << "Gracias por comprar con nosotros. Recuerda quedarte en casa:)";

    return 0;
}
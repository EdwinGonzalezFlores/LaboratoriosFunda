#include <iostream>

using namespace std;

int main(void)
{

    int numero1;
    int numero2;
    int numero3;
    float promedio;

    cout << endl << "Por favor ingrese su primer numero entero: " << endl;
    cin >> numero1;
   
    cout << endl << "Por favor ingrese su segundo numero entero: " << endl;
    cin >> numero2;
   
    cout << endl << "Por favor ingrese su tercer numero entero: " << endl;
    cin >> numero3;

    promedio = (float) (numero1+numero2+numero3)/3;
    cout << endl << "Su promedio es de: " << endl << promedio;

   
}
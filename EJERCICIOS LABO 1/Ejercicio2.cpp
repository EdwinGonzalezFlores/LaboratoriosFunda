#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    float radio;
    float area;
    float perimetro;
    const float PI = 3.1416;

    cout << endl << "Por favor ingrese el radio del circulo: ";
    cin >> radio;
    cout << endl;

    area = PI * pow(radio,2);
    cout << "El area del circulo es: " << area << endl;

    perimetro = 2 * PI * radio;
    cout << "El perimetro del circulo es: " << perimetro;

    return 0;
}
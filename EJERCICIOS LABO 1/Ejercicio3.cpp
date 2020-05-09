#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int a;
    int b;
    int c;
    float x;

    cout << endl << "Ingrese el valor de a: " << endl;
    cin >> a;
    cout << endl << "Ingrese el valor de b: " << endl;
    cin >> b;
    cout << endl << "Ingrese el valor de c: " << endl;
    cin >> c;

    x = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);

    cout << "El resultado de la ecuacion es:" << x;


    return 0;

}
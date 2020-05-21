#include <iostream>

using namespace std;

int main(void){
    int n1, n2;

    cout << endl << "NUMERO DIVISIBLE ENTRE OTRO" << endl;
    cout << "Ingrese el numero a dividir: " << endl;
    cin >> n1;
    cout << endl << "Ingrese el numero por el que se dividira: " << endl;
    cin >> n2;

    if (n1%n2==0)
    {
        cout << endl << "El numero " << n1 << " es divisible entre " << n2;
    }else
    {
        cout << endl << "El numero " << n1 << " no es divisble entre " << n2;
    }
    
    return 0;
}
#include "iostream"

using namespace std;

int main(void)
{
    int x;
    
    cout << endl << "NUMERO POSITIVO, NEGATIVO O CERO" << endl;
    cout << "Por favor ingresa un numero cualquiera:" << endl;
    cin >> x;

    if (x>=0)
    {
        if (x == 0)
        {
            cout << "El numero " << x << " es igual a cero";
        }else
        {
            cout << "El numero " << x << " corresponde a un numero positivo" << endl;
        }
        
    }else
    {
        cout << "El numero " << x << " corresponde a un numero negativo" << endl;
    }
    
    
    
    return 0;
}
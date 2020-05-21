#include "iostream"

using namespace std;

int main(void)
{
    int n;
    cout << endl << "NUMEROS PARES E IMPARES" << endl;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    if(n%2==0){
        cout << "El numero " << n << " es par.";
    }else{
        cout << "El numero " << n << " es impar";
    }

    return 0;
}
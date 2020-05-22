#include <iostream>
#include <string>
using namespace std;

int main(void){
    
    string palabra;

    cout << endl << "COMPROBAR CANTIDAD" << endl;
    cout << "Por favor ingrese una palabra: " << endl;
    cin >> palabra;

    if (palabra.length() > 10 )
    {
        cout << "La palabra '" << palabra << "' cuenta con mas de 10 caracteres." << endl << "Cuenta con " << palabra.length() << ".";

    }else{
        cout << "La palabra '" << palabra << "' no cuenta con mas de 10 caracteres." << endl << "Solo tiene " << palabra.length() << ".";
    }
    
    if (palabra.length()%2==0)
    {
        cout <<endl << "La longitud de la palabra '" << palabra << "' es par.";
    }else{
        cout << endl << "La longitud de la palabra '" << palabra << "' no es par.";
    }

    return 0;
}
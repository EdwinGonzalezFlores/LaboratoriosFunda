#include <iostream>
#include <string.h>
using namespace std;

int main(void){

    string palabra;

    cout << endl << "LETRA DE INICIO Y FINAL" << endl;
    cout << "Por favor ingresa una palabra:" << endl;
    cin >> palabra;

    if(palabra[0] == palabra.back()){
        cout << endl <<"La palabra '" << palabra << "' empieza y termina con la misma letra. (" << palabra[0] << ").";
    }else{
        cout << endl << "La palabra '" << palabra << "' NO empieza y termina con la misma letra. (" << palabra[0] << ") y (" << palabra.back() << ").";
    }


    return 0;
}
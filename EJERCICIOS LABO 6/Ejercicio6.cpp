#include <iostream>

using namespace std;

int main(void){

    int n, numero, contador = 0;

    cout << endl << endl << "ENCONTRAR ENTEROS" << endl;
    
    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo: ";
    cin >> n;

    int arreglo[n];

   for (int i = 0; i < n; i++)
    {
        cout << endl << "Ingrese los datos del arreglo: ";
        cin >> arreglo[i];
    }

    cout << "El arreglo contiene: [ ";
    for(int i = 0; i < n; i++){
         cout << arreglo[i] << ' ' ;
    }
    cout << "]";

    cout << endl << endl << "Ingrese el numero a buscar en el arreglo: ";
    cin >> numero;

    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == numero)
        {
            contador++;
        }
        
    }


    cout << endl << "El numero de veces que " << numero << " aparece en el arreglo es " << contador << " veces";




    return 0;
}
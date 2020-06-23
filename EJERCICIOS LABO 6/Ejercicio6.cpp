#include <iostream>

using namespace std;

int main(void){

    int n, numero, contador = 0;

    cout << endl << endl << "ENCONTRAR ENTEROS" << endl;
    //Se pide el tamaño del arreglo
    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo: ";
    cin >> n;

    int arreglo[n];

   for (int i = 0; i < n; i++)
    {
        cout << endl << "Ingrese los datos del arreglo: ";      //Se ingresan los datos del arreglo
        cin >> arreglo[i];
    }

    cout << "El arreglo contiene: [ ";      //Se muestran los datos del arreglo
    for(int i = 0; i < n; i++){
         cout << arreglo[i] << ' ' ;
    }
    cout << "]";

    cout << endl << endl << "Ingrese el numero a buscar en el arreglo: ";       //Se pide el número a buscar dentro del arreglo
    cin >> numero;

    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == numero)       //Se busca dentro del arreglo los números que sean igual al número ingresado por el usuario. Luego, por cada vez que sean iguales
                                        //Se aumenta en uno el contador
        {
            contador++;
        }
        
    }

    cout << endl << "El numero de veces que " << numero << " aparece en el arreglo es " << contador << " veces";        //Se muestra las veces que aparece el numero en el arreglo

    return 0;
}
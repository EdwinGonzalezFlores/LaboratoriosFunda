#include <iostream>

using namespace std;

int arreglo(int z[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese los datos de : ";
        cin >> z[i];
    }

    cout << "El  contiene a : [";
    for(int i = 0; i < n; i++){
        cout << z[i] << " ";
    }
    cout << "]";
    
    return 0;
}

int main(void){

    int m, n;
    int array1[m], array2[n];
    string a, b;
    a = "Arreglo 1";
    b = "Arreglo 2";

    cout << endl << "SUMA DE ARREGLOS" << endl;
    
    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo 1: ";
    cin >> m;
    cout << arreglo(array1, m);

    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo 2: ";
    cin >> n;
    cout << arreglo(array2, n);
    
    return 0;
}
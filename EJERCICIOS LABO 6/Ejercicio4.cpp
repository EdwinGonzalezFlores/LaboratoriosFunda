#include <iostream>

using namespace std;
void arreglo(int z[], int n, string x){
   

    for (int i = 0; i < n; i++)
    {
        cout << endl << "Ingrese los datos del arreglo: ";
        cin >> z[i];
    }

    cout << "El " << x << " contiene: [ ";
    for(int i = 0; i < n; i++){
         cout << z[i] << ' ' ;
    }
    cout << "]";
    
    
}

void suma(int a[], int b[], int n, int suma[]){
    for(int i = 0;i < n;i++){
    suma[i]=a[i] + b[i];
    }
}

int resultado(int a[], int n){
    for(int i = 0;i < n;i++){
    cout << a[i] << ' ';
    }
    cout <<  "]";

}

int main(void){

    int n;
    string a, b;
    a = "arreglo 1";
    b = "arreglo 2";
    cout << endl << endl << "SUMA DE ARREGLOS" << endl;
    
    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo 1: ";
    cin >> n;

    int array1[n];
    arreglo(array1, n, a);

    cout << endl << endl << "Ahora, por favor ingresa la misma cantidad de datos para el " << b;
    int array2[n];
    arreglo(array2, n, b);

    int arreglosuma[n];
    suma(array1, array2, n, arreglosuma);

    cout << endl << endl << "La suma de los dos arreglos dara como resultado: " << endl << "[ ";

    resultado(arreglosuma, n);


    

    return 0;
}


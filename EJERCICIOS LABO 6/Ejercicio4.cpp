#include <iostream>

using namespace std;

/*En esta función "arreglo" se le pide al usuario ingresar los datos de los dos arreglos, más adelante en la función principal, para luego
mostrarlos en pantalla.*/
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

/*En esta función "suma" se piden dos arreglos (a y b) los cuales son sumados y dan como resultado el arreglo 'suma'. Simplemente se realiza la suma pero no se muestra nada.*/
void suma(int a[], int b[], int n, int suma[]){
    for(int i = 0;i < n;i++){
    suma[i]=a[i] + b[i];
    }
}

/*En esta función se pide el arreglo anterior 'suma' y se muestra por pantalla.*/
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
    
    cout << endl << "Ingrese el tama" << (char)164 <<"o del arreglo 1: ";       //Se pide el tamaño para ambos arreglos
    cin >> n;

    int array1[n];
    arreglo(array1, n, a);      //Se aplica la función arreglo (Creada arriba) al primer arreglo

    cout << endl << endl << "Ahora, por favor ingresa la misma cantidad de datos para el " << b;
    int array2[n];
    arreglo(array2, n, b);      //Se realiza lo mismo para el arreglo numero 2

    int arreglosuma[n];     //Se crea un arreglo donde se guardará la suma
    suma(array1, array2, n, arreglosuma);       //Se aplcia la función suma definida arriba

    cout << endl << endl << "La suma de los dos arreglos dara como resultado: " << endl << "[ ";

    resultado(arreglosuma, n);      //Se muestra el resultado de la suma


    

    return 0;
}


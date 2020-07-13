#include <iostream>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}; 

int main(){

    int n;
    
    cout << endl << endl << "PROCESAMIENTO DE COMPRAS" << endl;
    cout << endl << "MUy buenas tardes, por favor introduzca cuantos productos distintos ha comprado: ";
    cin >> n;

    struct costoPorArticulo articulos[n];
    cout << endl << "Ahora procedera a completar la informacion de todos los productos comprados." << endl;

    return 0;
}

/*  
    Para resolver el problema desarrolle las siguientes funciones:
    a)   La función main, que solicita la cantidad de artículos a incluir en el arreglo y 
    controla las llamadas a las demás funciones. En esta función se debe declarar 
    el  arreglo  y  la  variable  entera  que  indicará  la  cantidad  de  artículos  que 
    contendrá.
    b)   Una función que lea los datos sobre el nombre, la cantidad y el precio unitario 
    de cada artículo y los incorpore al arreglo.
    c)   Una función que calcule el costo por artículo e incorpore este valor en el campo 
    correspondiente de cada artículo en cada casilla del arreglo.
    d)   Una función  que despliegue el contenido del arreglo. Mostrando los cuatro datos 
    de la estructura para cada artículo.
    e)   Una  función que retorne el  costo total de la  compra, que es la  suma  de  los 
    costos de cada artículo. Este valor se desplegará en la función main. 
*/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}; 

float total = 0;

void leerdatos(costoPorArticulo articulos[], int x){
    for(int i = 0; i < x; i++){
        cout << endl << "Ingrese el nombre del articulo: ";
        cin >> articulos[i].nombreArticul;
        cout << "Cantidad de productos comprados: ";
        cin >> articulos[i].cantidad;
        cout << "Precio del producto: ";
        cin >> articulos[i].precio;
        cout << "**" << endl;

        if (i < (x-1))
        {
            cout << endl << "Introduce los datos para el siguiente articulo.";
        }
            
    }
}

void costoarticulo(costoPorArticulo articulos[], int x){
    float costotal;
     for(int i = 0; i < x; i++){
         costotal = articulos[i].precio * articulos[i].cantidad;
         articulos[i].costoPorArticulo = costotal;
         
     }
}

void contenido(costoPorArticulo articulos[], int x){
    
    cout << endl << endl << "DATOS DE LA FACTURA";

    for(int i = 0; i < x; i++){
        cout << endl << "Nombre: " << articulos[i].nombreArticul;
        cout << endl << "CAntidad de productos comprados: " << articulos[i].cantidad;
        cout << endl << "Precio unitario: " << articulos[i].precio;
        cout << endl << "Total por articulo: " << articulos[i].costoPorArticulo << endl;
        cout << "**" << endl;

        if (i < (x-1))
        {
            cout << "Siguiente articulo: ";
        }
        

    }
}

void sumatotal(costoPorArticulo articulos[], int x){
    

    for(int i = 0; i < x; i++){
        total += articulos[i].costoPorArticulo; 
    }
    
}

int main(void){

    int n;

    

    cout << endl << endl << "PROCESAMIENTO DE COMPRAS" << endl;
    cout << endl << "Muy buenas tardes, por favor introduzca la cantidad de productos distintos que ha comprado: ";
    cin >> n;
    struct costoPorArticulo articulos[n];

    cout << endl << "En los siguientes campos se le pedira toda la informacion relacionada a cada producto. Recuerde llenar todos los campos que se le presenten:" << endl;

    leerdatos(articulos, n);

    costoarticulo(articulos, n);

    contenido(articulos, n);

    sumatotal(articulos, n);

    cout << endl << endl << "El COSTO TOTAL de la compra es: " << total;
    return 0;
}

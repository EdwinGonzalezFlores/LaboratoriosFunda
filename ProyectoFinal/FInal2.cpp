#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}; 

float total = 0;

/*Se crea la función leerdatos la cual recoge los datos del usuario. En esta función se pasa por un "for" todo el array para obtener todos los datos de todos los productos
al mismo tiempo. */

void leerdatos(costoPorArticulo articulos[], int x){
     
    for(int i = 0; i < x; i++){
        cout << endl << "Ingrese el nombre del articulo: ";
        cin.get(articulos[i].nombreArticul, (longCad + 1));         //Un cin.get para obtener nombres con espacios
        cout << "Cantidad de productos comprados: ";
        cin >> articulos[i].cantidad;
        cout << "Precio del producto: ";
        (cin >> articulos[i].precio).get();
        cout << "**" << endl;

        if (i < (x-1))                                      //Este mensaje se imprimirá para pasar al siguiente producto. Aparecerá por pantalla hasta llegar al último.
        {
            cout << endl << "Introduce los datos para el siguiente articulo.";
        }
            
    }
}

/* Se crea otra función llamada "costoarticulo" la cual introduce el valor del costo total por artículo a cada estructura correspondiente. */

void costoarticulo(costoPorArticulo articulos[], int x){
    float costotal;                                                 //En esta función se guardará el costo total de cada producto.
     for(int i = 0; i < x; i++){
         costotal = articulos[i].precio * articulos[i].cantidad;    //Se realizan las operaciones para obtener el costo por artículo correspondiente.
         articulos[i].costoPorArticulo = costotal;                  //EL valor de la variable anterior se guarda en la casilla correspondiente de la estructura para cada arreglo.
         
     }
}

/* Se presenta otra función la cual mostrará por pantalla cada casilla de la estructura.*/

void contenido(costoPorArticulo articulos[], int x){
    
    cout << endl << endl << "DATOS DE LA FACTURA";

    for(int i = 0; i < x; i++){
        cout << endl << "Nombre: " << articulos[i].nombreArticul;
        cout << endl << "Cantidad de productos comprados: " << articulos[i].cantidad;
        cout << endl << "Precio unitario: " << articulos[i].precio;
        cout << endl << "Total por articulo: " << articulos[i].costoPorArticulo << endl;
        cout << "**" << endl;

        if (i < (x-1))                                              //Se muestra un mensaje por pantalla para separar cada factura de cada producto. 
        {
            cout << "Siguiente articulo: ";
        }
        

    }
}

/* Por último se crea una función en la cual se obtendra el COSTO TOTAL de toda la compra. Consiste en tomar los valores del costo total de cada artículo y sumarlos en una
sola variable.*/

void sumatotal(costoPorArticulo articulos[], int x){
    

    for(int i = 0; i < x; i++){
        total += articulos[i].costoPorArticulo;                    //Esta variable se creó justo después de la estructura al inicio del programa.
    }
    
}

/* Se llega a la función principal. */

int main(void){

    int n;                                                         //Variable que indica la cantidad de productos a ingresar y la cantidad de facturas a crear. 

    cout << endl << endl << "PROCESAMIENTO DE COMPRAS" << endl;
    cout << endl << "Muy buenas tardes, por favor introduzca la cantidad de productos distintos que ha comprado: ";
    (cin >> n).get();                                              //Se introduce la cantidad de productos a procesar.
    struct costoPorArticulo articulos[n];                          //Se define la estructura a usar.

    cout << endl << "En los siguientes campos se le pedira toda la informacion relacionada a cada producto. Recuerde llenar todos los campos que se le presenten:" << endl;

    leerdatos(articulos, n);                                       //Se usa la primer función la cual permitirá el ingreso de los datos por teclado para cada producto.

    costoarticulo(articulos, n);                                   //Se inserta la función con la que se calculará el costo total por cada producto.

    contenido(articulos, n);                                       //La función con la que se presentarán todas las facturas por pantalla se utiliza.

    sumatotal(articulos, n);                                       //Se calcula el COSTO TOTAL de la compra con la función.

    cout << endl << endl << "El COSTO TOTAL de la compra es: " << total;    //Se muestra por pantalla el costo total de la compra.
    return 0;
}

//Gracias.
#include <iostream>

using namespace std;

float promedio(float array[], int n){                   //Se crea la función "promedio".
    float suma = 0, promedio;

    for(int i = 0; i < n; i++){
        suma += array[i];                               //Se realiza una sumatoria con todos los valores del array.
    }
   promedio = suma/n;                                   //Se obtiene el promedio.
   return promedio;                                     //Se retorna el promedio.
}

void alejados(float array[], int n, float x){           //Se crea la función para ver cuales se encuentran por encima y por debajo de la media.
    int contadorbajo = 0, contadoralto = 0;             //Se usan contadores que aumentan dependiendo el caso.
    
    for(int i = 0; i < n; i++)                          //Se analiza cada valor del array
    {
        if (array[i] < x)                               //Si los valores son menores que la media, aumenta 'contadorbajo'.
        {
            contadorbajo++;
    
        }else if (array[i] > x)                         //Si están por encima de la media, se aumenta el otro contador
        {
            contadoralto++;
        }
        
    }
   cout << "La cantidad de estaturas que estan por debajo de la media son " << contadorbajo << ". Y la cantidad de estaturas por encima de la media es igual a " << contadoralto << ".";
            //Finalmente se muestran los dos por pantalla
}


int main(void){

    float estaturas[25];


    cout << endl << endl << "ESTATURAS" << endl;
    cout << "Introduce las estaturas de los 25 alumnos de la clase. Despues de escribir la estatura de uno presiona 'Enter' y procede con el siguiente. Sigue asi hasta completar las 25 alturas";
    cout << endl;       //Se piden las 25 alturas

    for (int i = 0; i < 25; i++)
    {
        cout << endl << "Ingrese los datos del arreglo: ";          //Se introducen las alturas
        cin >> estaturas[i];
    }

    cout << "Las estaturas de todos los estudiantes son: [ ";       //Mostramos porpantalla
    for(int i = 0; i < 25; i++){
         cout << estaturas[i] << ' ' ;
    }
    cout << "]" << endl;

    float a = promedio(estaturas, 25);                              //El promedio se obtiene

    cout << endl << "El promedio de la estatura corresponde a: " << a << endl;

    alejados(estaturas, 25, a);                                     //Se muestra los valores por arriba y debajo de la media

    return 0;
}
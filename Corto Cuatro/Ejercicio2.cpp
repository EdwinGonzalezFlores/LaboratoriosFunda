#include <iostream>

using namespace std;

float promedio(float array[], int n){
    float suma = 0, promedio;

    for(int i = 0; i < n; i++){
        suma += array[i];
    }
   promedio = suma/n;
   return promedio;
}

void alejados(float array[], int n, float x){
    int contadorbajo = 0, contadoralto = 0;
    
    for(int i = 0; i < n; i++)
    {
        if (array[i] < x)
        {
            contadorbajo++;
    
        }else if (array[i] > x)
        {
            contadoralto++;
        }
        
    }
   cout << "La cantidad de estaturas que estan por debajo de la media son " << contadorbajo << ". Y la cantidad de estaturas por encima de la media es igual a " << contadoralto << ".";

}


int main(void){

    float estaturas[25];


    cout << endl << endl << "ESTATURAS" << endl;
    cout << "Introduce las estaturas de los 25 alumnos de la clase. Despues de escribir la estatura de uno presiona 'Enter' y procede con el siguiente. Sigue asi hasta completar las 25 alturas";
    cout << endl;

    for (int i = 0; i < 25; i++)
    {
        cout << endl << "Ingrese los datos del arreglo: ";
        cin >> estaturas[i];
    }

    cout << "Las estaturas de todos los estudiantes son: [ ";
    for(int i = 0; i < 25; i++){
         cout << estaturas[i] << ' ' ;
    }
    cout << "]" << endl;

    float a = promedio(estaturas, 25);

    cout << endl << "El promedio de la estatura corresponde a: " << a << endl;

    alejados(estaturas, 25, a);

    return 0;
}
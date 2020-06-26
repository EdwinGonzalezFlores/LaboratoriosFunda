#include <iostream>

using namespace std;

void ingmos(float array[], int n){
    for (int i = 0; i < n; i++){
            cout << endl << "Ingrese las notas obtenidas: ";
            cin >> array[i];
        }

    cout << "Las notas obtenidas por el estudiante son: [ ";
    for(int i = 0; i < n; i++){
         cout << array[i] << ' ' ;
        }
    cout << "]" << endl;
}

void suma(float array[], int n){
    float suma = 0, promedio;

    for(int i = 0; i < n; i++){
        suma += array[i] * 2;
    }
   cout << "La nota es igual a " << suma;

   if (suma >= 60)
   {
       cout << endl << "El alumno ha APROBADO";
   }else
   {
       cout << endl << "El alumno REPROBO la materia";
   }
   
   
}

int main(void){

    int alumnos, n = 5;
    float notas[n];

    cout << endl << "NOTA FINAL" << endl;

    cout << "Introduce el numero de alumnos: " << endl;
    cin >> alumnos;

    for (int i = 1; i <= alumnos; i++)
    {
        ingmos(notas, n);

        suma(notas, n);

        if(i < alumnos) //Mientras no se alcance el numero de empleados, imprimir este mensaje.
            cout << endl << endl << "Vuelve a llenar los datos para el siguiente alumno." << endl << endl;
    }
    
    return 0;
}
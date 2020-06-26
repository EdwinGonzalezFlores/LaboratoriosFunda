#include <iostream>

using namespace std;

void ingmos(float array[], int n){              //UNa función que pide y muestra por pantalla los valores del array es creada
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

void suma(float array[], int n){                //La función de suma es creada
    float suma = 0, promedio;

    for(int i = 0; i < n; i++){
        suma += array[i] * 2;                   //Se realiza una sumatoria multiplicando por dos lso valores
    }
   cout << "La nota es igual a " << suma;       //La nota se muestra

   if (suma >= 60)                              //Dependiendo del valor obtenido de nota final, se aprueba o se reprueba
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

    cout << "Introduce el numero de alumnos: " << endl;     //Se introduce la cantidad de alumnos a los que se les ingresará notas
    cin >> alumnos;

    for (int i = 1; i <= alumnos; i++)      //Un 'for' que funcionará hasta el límite de alumnso ingresados es creado
    {                                       //Las dos funciones creadas anteriormente son usadas
        ingmos(notas, n);

        suma(notas, n);

        if(i < alumnos) //Mientras no se alcance el numero de alumnos, imprimir este mensaje.
            cout << endl << endl << "Vuelve a llenar los datos para el siguiente alumno." << endl << endl;
    }
    
    return 0;
}
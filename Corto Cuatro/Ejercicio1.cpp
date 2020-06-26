#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int murcielago(char array[], int x){                //Se define la función "murcielago"
     for(int i = 0; i < x; i++){
         if (array[i] == 'm'){                      //Lo que se realiza es buscar dentro del array, los valores que sean iguales a las letras y estos se reemplazan por números
             array[i] = '0';
         }
         if (array[i] == 'u'){                      //Se  realiza esto con todas las letras de la palabra "murcielago"
             array[i] = '1';
         }
         if (array[i] == 'r'){
             array[i] = '2';
         }
         if (array[i] == 'c'){
             array[i] = '3';
         }
         if (array[i] == 'i'){
             array[i] = '4';
         }
         if (array[i] == 'e'){
             array[i] = '5';
         }
         if (array[i] == 'l'){
             array[i] = '6';
         }
         if (array[i] == 'a'){
             array[i] = '7';
         }
         if (array[i] == 'g'){
             array[i] = '8';
         }
         if (array[i] == 'o'){
             array[i] = '9';
         }
         
     }

    cout << endl << "son: ";                        //Se vuelve a mostrar la cadena de carácteres con los nuevos valores y/o letras.
    for(int i = 0; i < x; i++){
         cout << array[i];
    }
}

int main(void){
    char cadena[50];
    
   
    cout << endl << "CLAVE MURCIELAGO" << endl;
    cout << endl << "Por favor introduce la frase que tu quieras: ";        //Se le pide al usuario una frase
    cin.getline(cadena,50);

    cout << endl << "Tu frase es: " << cadena;                              //Se muestra por pantalla
    
    int z = strlen(cadena);                                                 //Se crea una variable que contiene la cantidad de letras ocupadas de la cadena.
    

    murcielago(cadena, z);                  //La función creada arriba se usa con el array y la cantidad de letras ocupadas del array como límite.
    

    
    return 0;
}
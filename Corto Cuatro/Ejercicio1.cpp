#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

int murcielago(char array[], int x){
     for(int i = 0; i < x; i++){
         if (array[i] == 'm'){
             array[i] = '0';
         }
         if (array[i] == 'u'){
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

    cout << endl << "son: ";
    for(int i = 0; i < x; i++){
         cout << array[i];
    }
}

int main(void){
    char cadena[50];
    
   
    cout << endl << "CLAVE MURCIELAGO" << endl;
    cout << endl << "Por favor introduce la frase que tu quieras: "; 
    cin.getline(cadena,50);

    cout << endl << "Tu frase es: " << cadena;
    
    int z = strlen(cadena);
    

    murcielago(cadena, z);
    

    
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int num= 1+rand()%(101-1), numerox, intentos = 5;
char Tecla;

int main(void){

    cout << endl << "ADIVINA UN NUMERO" << endl;

    do
    {
        cout<< "Ingresa un numero y comprueba si has ganado: " << endl;
        cin >> numerox;
        intentos--;
        if (numerox > num)
        {
            cout << "Menor" << endl << "Quieres seguir jugando? Presiona 'E' en MAYUSCULAS si quieres salir" << endl;
            cin >> Tecla;
            switch (Tecla)
            {
            case 'E':
                cout << "Gracias por participar." << endl;
                break;
            
            default: cout << "Te quedan " << intentos << " intentos." << endl;
                break;
            }
        }else if (numerox < num)
        {
            cout << "Mayor" << endl << "Quieres seguir jugando? Presiona 'E' en MAYUSCULAS si quieres salir" << endl;
            cin >> Tecla;
            switch (Tecla)
            {
            case 'E':
                cout << "Gracias por participar." << endl;
                break;
            
            default: cout << "Te quedan " << intentos << " intentos." << endl;
                break;
            };
        }else
        {
            cout << "Felicidades.";
        }
        
            

    } while (intentos > 0 && numerox != num && Tecla != 'E');
    
    return 0;
}
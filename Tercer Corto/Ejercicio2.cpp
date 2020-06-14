#include <iostream>
#include <stdlib.h>         /*Se incluyen estas dos funciones para obtener un numero seleccionado al azar*/
#include <time.h>
using namespace std;

int num= 1+rand()%(101-1), numerox, intentos = 5;           
/*Se declara el numero aleatorio, el numero ingresado y la cantidad de intentos*/
char Tecla;

int main(void){

    cout << endl << "ADIVINA UN NUMERO" << endl;

    do          /*Se lleva a cabo un do while que permitirá detenerse cuando se alcancen los parametros descritos en While()*/
        {
        cout<< "Ingresa un numero y comprueba si has ganado: " << endl;
        cin >> numerox;         /*Se ingresa el número por el usuario y que se comparará con el numero aleatorio*/
        intentos--;             /*La cantidad de intentos se le resta a uno*/
        if (numerox > num)      /* Se compara numerox con el numero aleatorio*/
        {
            cout << "Menor" << endl << "Quieres seguir jugando? Presiona 'E' en MAYUSCULAS si quieres salir" << endl; /*Después de comparar se da el mensaje de seguir jugando
                                                                                                                        o presionar "E" para salir del juego*/
            cin >> Tecla;
            switch (Tecla)
            {
            case 'E':
                cout << "Gracias por participar." << endl;
                break;
            
            default: cout << "Te quedan " << intentos << " intentos." << endl;
                break;
            }
        }else if (numerox < num)        /* Se compara numerox con el numero aleatorio*/
        {
            cout << "Mayor" << endl << "Quieres seguir jugando? Presiona 'E' en MAYUSCULAS si quieres salir" << endl;   /*Después de comparar se da el mensaje de seguir jugando
                                                                                                                        o presionar "E" para salir del juego*/
            cin >> Tecla;
            switch (Tecla)
            {
            case 'E':
                cout << "Gracias por participar." << endl;
                break;
            
            default: cout << "Te quedan " << intentos << " intentos." << endl;
                break;
            };
        }else   /* Se compara numerox con el numero aleatorio*/
        {
            cout << "Felicidades.";
        }
        
            

    } while (intentos > 0 && numerox != num && Tecla != 'E'); /*Aquí se encuentran los parámetros que defien el funcionamiento del While()*/
    
    
    return 0;
}
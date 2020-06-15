#include <iostream>

using namespace std;

int mcd(int x, int y){ //Se crea una funcion con la cual obtener el mcd
    int mcd;
    
    mcd = (x%y);        //Se define la variable del mcd

    if (mcd == 0)  
    {
        cout << "El MCD de los numeros " << x << " y " << y << " es ";
        return y;       //Retorna el divisor
    }
    
    while (mcd != 0)       //Si el resultado no es cero se continua hasta que de cero.
    {
        x = y;
        y = mcd;
        mcd = (x%y);

        if (mcd == 0)
        {
            cout << "El MCD de ambos numeros es ";
            return y;
        }
        
    }
    
   
}



int main(void){

    int dividendo;          //Se declaran las variables a ingresar
    int divisor;
    



    cout << endl << endl << "CALCULAR MCD" << endl;
    cout << "Por favor introduce el numero mayor (Dividendo): ";
    cin >> dividendo;
    cout << endl << "Por favor intrdouce el numero menor (Divisor): ";
    cin >> divisor;

    cout << mcd(dividendo, divisor);        //Se lleva a cabo la funcion definida arriba


    return 0;
}
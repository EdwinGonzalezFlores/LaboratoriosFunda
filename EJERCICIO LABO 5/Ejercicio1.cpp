#include <iostream>

using namespace std;

int mcd(int x, int y){
    int mcd;
    
    mcd = (x%y);

    if (mcd == 0)
    {
        cout << "El MCD de los numeros " << x << " y " << y << " es ";
        return y;
    }
    
    while (mcd != 0)
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

    int dividendo;
    int divisor;
    

    cout << endl << endl << "CALCULAR MCD" << endl;
    cout << "Por favor introduce el numero mayor (Dividendo): ";
    cin >> dividendo;
    cout << endl << "Por favor intrdouce el numero menor (Divisor): ";
    cin >> divisor;

    cout << mcd(dividendo, divisor);


    return 0;
}
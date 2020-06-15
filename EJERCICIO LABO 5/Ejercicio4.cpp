#include <iostream>

using namespace std;

int dias(int x, int z){         /*Se declara una varibale en la que dependiendo de dos parametros, se asiganará una cantidad de días distintas. Dependiendo del valor en
                                    mes así será la cantidad de días. La otra variable corresponde al año el cual se hace una validación y se define si es año bisiesto o no.*/
        int dias = 31;
        if (x == 4 || x == 6 || x == 9 || x == 11)
        {
            dias = 30;
        }else if (x == 2)
        {
            if ((z % 4 == 0) && (z % 100 != 0) || (z % 400 == 0))       //Año bisiesto o no.
            {
                dias = 29;
            }else
            {
                dias = 28;
            }
        }
        
        return dias; 
}


int main(void){
   
    int dd, mm, aa;


    cout << endl << "FECHAS" << endl;           //Se introducen las fechas por el usuario.
    
    cout << endl << "Introduce el dia(en numeros): ";
    cin >> dd;
    cout << endl << "Introduce el mes (en numeros): ";
    cin >> mm;
    cout << endl << "Introduce el a" << (char)164 << "o: ";
    cin >> aa;
    
    cout << endl << "La fecha introducida es: " << dd << "/" << mm << "/" << aa;


    if (dd >= 1 && dd <= dias(mm,aa) && mm >= 1 && mm <= 12) //Si los parametros son validos, se procede.
    {
        dd++;
        if (dd > dias(mm, aa))      /*Se aplica la función de arriba. Si la cantidad de dias es mayor a la cantidad de días por mes (que se define en la función) se  procede 
                                        a sumar un numero a mes; si mes entonces supera 12 entonces se suma un año. */
        {
            dd = 1;
            mm++;
            if (mm > 12){
                mm = 1;
                aa++;
            }
        }

       cout << endl << endl << "La fecha introducida AL DIA SIGUIENTE es: " << dd << "/" << mm << "/" << aa; 
    }else
    {
        cout << endl << "ERROR. No has introducido una fecha valida. Si quieres intentar de nuevo, reinicia el programa.";
    }//En caso de que no funcione, no procede nada.
    
    

    

    return 0;
}
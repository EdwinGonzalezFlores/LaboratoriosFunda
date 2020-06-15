#include <iostream>

using namespace std;

int main(void){
    int hora, min, seg;     //Se declaran las variables



    cout << endl<< "HORAS" << endl;
    cout << "Por favor introduzca la hora (En formato de 24 horas): ";      //Se piden las variables al usuario
    cin >> hora;

    cout << "Minutos: ";
    cin >> min;

    cout << "Segundos: ";
    cin >> seg;

    if (hora >= 0 && hora <= 23 && min >= 0 && min <= 59 && seg >= 0 && seg <= 59)      //Definir en que parametros se le sumara un segundo.
    {                               /* En este espacio lo que se realiza es que al sumar al segundo, minuto y hora, estos alcanzan los 
                                        valores de 60, 60 o 24, respectivamente; se le sumara "uno" a la siguiente unidad de tiempo*/
        ++seg;
        if (seg == 60)
        {
            seg = 00;
            min++;
            if (min == 60)
            {
                min = 00;
                hora++;
                if (hora == 24)
                {
                    hora = 00;
                }
            }    
        }
        cout << "La hora un segundo despues es: " << hora << ":" << min << ":" << seg;
    }
}
#include <iostream>

using namespace std;

int main(void){
    int hora, min, seg;



    cout << endl<< "HORAS" << endl;
    cout << "Por favor introduzca la hora (En formato de 24 horas): ";
    cin >> hora;

    cout << "Minutos: ";
    cin >> min;

    cout << "Segundos: ";
    cin >> seg;

    if (hora >= 0 && hora <= 23 && min >= 0 && min <= 59 && seg >= 0 && seg <= 59)
    {
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
#include <iostream>

using namespace std;

float salariototal(int w, int x)
{
    float salariototal;
    salariototal = (w * 1.75) + (x * 2.50);
    return salariototal;
}


float salarioreal(float y)
{
    float salarioreal;
    float seguro = (y * 0.04);
    float afp = (y * 0.0625);
    float renta = (y * 0.1);
    salarioreal = (y - (seguro + afp + renta));
    return salarioreal;
}


int main(void){

    int empleados, horanormal, horaextra;
    float salario1, salario2;


    cout << endl << "CALCULADORA DE SALARIOS" << endl << endl;

    cout << "Introduce el numero de empleados: " << endl;
    cin >> empleados;

    for(int i = 1; i <= empleados; i++)
    {
        cout << endl << "Horas trabajadas" << endl << "Horas normales: ";
        cin >> horanormal;
        cout << "Horas extras: ";
        cin >> horaextra;
        salario1 = salariototal(horanormal,horaextra);
        cout << endl << "El salario total es: " << salario1 << endl;

        salario2 = salarioreal(salario1);
        cout << "Despues de los tres descuentos realizados, el salario es: " << salario2<< endl;
        
        if(i < empleados)
            cout << endl << "Vuelve a llenar los datos para el siguiente empleado por favor." << endl << endl;
    }
    
    return 0;
}
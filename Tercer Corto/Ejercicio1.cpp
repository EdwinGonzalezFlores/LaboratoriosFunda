#include <iostream>

using namespace std;

float salariototal(int w, int x)
{
    float salariototal;
    salariototal = (w * 1.75) + (x * 2.50);
    return salariototal;
}

/* Se crea una función en la que se ingresen las horas normales y las horas extras trabajadas. Estos dos valores se multiplican obteniendo el valor del salario total*/

float salarioreal(float y)
{
    float salarioreal;
    float seguro = (y * 0.04);
    float afp = (y * 0.0625);
    float renta = (y * 0.1);
    salarioreal = (y - (seguro + afp + renta));
    return salarioreal;
}

/* Se crea una función en la que se definen los parametros que deben ser restados al salario total encontrado en la función anterior. (float y) corresponde a la variable de
salario total cuando esta función se introduce en el programa.*/

int main(void){

    int empleados, horanormal, horaextra;
    float salario1, salario2;


    cout << endl << "CALCULADORA DE SALARIOS" << endl << endl;

    cout << "Introduce el numero de empleados: " << endl;
    cin >> empleados;

    for(int i = 1; i <= empleados; i++) //Se realiza un for que se detiene al alcanzar la cantidad N de empleados ingresados.
    {
        cout << endl << "Horas trabajadas" << endl << "Horas normales: ";
        cin >> horanormal;
        cout << "Horas extras: ";
        cin >> horaextra;
        salario1 = salariototal(horanormal,horaextra); //Se lleva a cabo la función salariototal definida arriba.
        cout << endl << "El salario total es: " << salario1 << endl; //Se imprime el salario total.

        salario2 = salarioreal(salario1); //Se lleva a cabo la función que resta los descuentos con la función definida arriba.
        cout << "Despues de los tres descuentos realizados, el salario es: " << salario2<< endl; //Se imprime el salario real.
        
        if(i < empleados) //Mientras no se alcance el numero de empleados, imprimir este mensaje.
            cout << endl << "Vuelve a llenar los datos para el siguiente empleado por favor." << endl << endl;
    }
    
    
    return 0;
}
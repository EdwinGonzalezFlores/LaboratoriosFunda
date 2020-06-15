#include <iostream>


using namespace std;


int aao; /*Se define la variable en la que se guardará el año*/

bool bisiesto(int x){     /*Se crea una función en la que se llevará a cabo la validación de un año bisieto*/
    string a, b;    /*Se definen variables que guardan cadenas a imprimir dependiendo del resultado*/

    a = ("Efectivament es bisiesto");
    b = ("NO. No es bisiesto");
    if (x % 4 == 0){ /*Se realizan las operaciones para comprobar si un año es bisiesto o no*/
        cout << a << endl;
       return true;
    }else if (x % 400 == 0 && x % 100 !=0){      /*Se realizan las operaciones para comprobar si un año es bisiesto o no*/
        cout << a<< endl; 
        return true;
    }else{       /*De lo contrario, se presenta el mensaje de que no es año bisiesto*/
        cout << b << endl;
        return false;
    }
    
    

}
int main(void){
    int aao;
    cout << endl << "A" << (char)164 << "o Bisiesto" << endl; /*En la función principal se pide el año bisiesto y se guarda en "aao"*/

    cout << endl << "Por favor ingrese el a" << (char)164 << "o a evaluar:" << endl;
    cin >> aao;

    cout << bisiesto(aao);      /*Se realiza la función descrita arriba*/


    return 0;
}
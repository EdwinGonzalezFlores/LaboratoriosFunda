#include <iostream>

using namespace std;

int aao;

int bisiesto(int x){
    if (x % 400 == 0)
    {
        cout << "El a" << (char)164 << "o " << x << " es bisiesto";
    }else if (x % 4 == 0 && x % 100 !=0)
    {
        cout << "El a" << (char)164 << "o " << x << " es bisiesto";
        
    }else
    {
        cout << "El a" << (char)164 << "o " << x << " NO es bisiesto";
    }
    
    
    
}
int main(void){

    cout << endl << "A" << (char)164 << "o Bisiesto" << endl;
    
    cout << endl << "Por favor ingrese el a" << (char)164 << "o a evaluar:" << endl;
    cin >> aao;

    cout << bisiesto(aao);

    return 0;
}
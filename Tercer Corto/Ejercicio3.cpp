#include <iostream>


using namespace std;


int aao;

string bisiesto(int x){
    string a, b;

    a = ("Efectivament es bisiesto");
    b = ("NO. No es bisiesto");
    if (x % 4 == 0){
       return a;
    }else if (x % 400 == 0 && x % 100 !=0){
        return a;
    }else{
        return b;
    }
    
    return 0;
    
}
int main(void){
    int aao;
    cout << endl << "A" << (char)164 << "o Bisiesto" << endl;
    
    cout << endl << "Por favor ingrese el a" << (char)164 << "o a evaluar:" << endl;
    cin >> aao;

    cout << bisiesto(aao);

    return 0;
}
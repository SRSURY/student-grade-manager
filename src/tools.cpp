#include <iostream>
#include <limits>
#include "tools.h"
using namespace std;
void validarEntradaEntero(int &value){
    while(true){
        if(cin >> value){
            break;
        }else{
            cout << "Error: Eso no es un numero. Intenta de nuevo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
void validarEntradaDecimal(float &value){
    while(true){
        if(cin >> value){
            break;
        }else{
            cout << "Error: Eso no es un numero. Intenta de nuevo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
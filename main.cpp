//Reescrever uma função matemática (abs ou pow)
//Fatorial Iterativo
//Progressão Aritmética
//Fibonacci Iterativo
//Cálculo do Número de Dígitos de um Inteiro

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

float fAbsolute(float fNumero){
    if(fNumero >= 0){
        return fNumero;
    }
    else {
        return -fNumero;
    }
}
int iFatorial(int iNumero){
    for(int i = iNumero-1; i > 0; i--){
        iNumero = iNumero * i;
    }
    if(iNumero == 0){
        iNumero = 1;
    }
    return iNumero;
}

int main()
{
    cout << "Valor absoluto de -7: " << fAbsolute(7) << endl;
    cout << "Fatorial de 5: " << iFatorial(5) << endl;
    return 0;
}
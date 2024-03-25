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

int main()
{
    cout << "Valor absoluto de -7: " << fAbsolute(7) << endl;
    return 0;
}
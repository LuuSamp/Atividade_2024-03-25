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


    int iPrimeiroTermo = 1; // Primeiro termo da PA
    int iRazao = 2; // Razão da PA
    int iNumTermos = 10; // Número de termos que queremos calcular

    // Chamada da função usando as referências
    calcularPA(iPrimeiroTermo, iRazao, iNumTermos);

    return 0;
}

void calcularPA(int iRefPrimeiroTermo, int iRefRazao, int iNumTermos) {
    for(int iCount = 0; iCount < iNumTermos; iCount++) {
        cout << iRefPrimeiroTermo + iCount * iRefRazao << " ";
    }
    cout << endl;
}
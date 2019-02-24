#include <iostream>
#include "contaHeader.h"
using namespace std;

Conta::Conta(float saldoInicial)
{
    if(saldoInicial>=0)
    {
        saldoConta=saldoInicial;
    }
    else
    {
        saldoConta=0;
        cout<<"Valor negativo inicializado no saldoInicial"<<endl;
    }
}
float Conta::getSaldo()
{
    return saldoConta;
}
void Conta::credito(float credito)
{
    saldoConta += credito;
}
void Conta::debito(float debito)
{
    if(debito>=saldoConta)
    {
        cout<<"Debito maior que o saldoConta"<<endl;
    }
    else saldoConta-=debito;
}

#include <bits/stdc++.h>
 
using namespace std;

class Conta
{
    public:
    Conta (float = 0);
    void setSaldo(float);
    float Depositar(float);
    float Sacar(float);
    float getSaldo();    
    private:
    float Saldo;
};
    Conta::Conta(float value)
{
    this->Depositar(value); 
}
    void Conta::setSaldo(float value)
{
    if (value <=0) this->Saldo=0;
    else this->Saldo=value;
}
    float Conta::Depositar(float value)
{
    if (value<=0) this->setSaldo(this->getSaldo());
    else this->setSaldo(this->getSaldo()+value); 
}
    float Conta::Sacar(float value)
{
    if (value <=0) this->Saldo=getSaldo();
    else this->setSaldo(this->getSaldo()-(value*1.04));
}
    float Conta::getSaldo()
{
    return this->Saldo;
}
    class ContaEsp : public Conta 
{
    public:
    ContaEsp(float=0);
    float Sacar(float);    
    private:    
};
    ContaEsp::ContaEsp(float value):Conta(value){}
    
    float ContaEsp::Sacar(float value)
{
    if (value<=0) this->setSaldo(this->getSaldo());
    else this->setSaldo(this->getSaldo()-(value*1.015));
}  
    int main()
{
    Conta A;
    A.setSaldo(500);
    cout << A.getSaldo() <<endl;   
    A.Depositar(1000);
    cout << A.getSaldo() << endl;
    A.Sacar(100);
    cout << A.getSaldo()<<endl;
    cout << "conta B\n";
    ContaEsp B;
    B.setSaldo(1000);  
    cout << B.getSaldo()<<endl;
    B.Depositar(1000);
    cout << B.getSaldo()<<endl;
    B.Sacar(100);
    cout << B.getSaldo()<<endl;    
}    


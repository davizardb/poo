#include <iostream>

using namespace std;

class Conta
{
  public:
    Conta(float);
    float setSaldo();
    float getSaldo();
    void credito(float);
    void debito(float);
  private:
    float saldoConta;
};

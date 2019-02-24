#include <iostream>
#include "contaHeader.h"
using namespace std;

int main()
{
  Conta conta1(500);
  conta1.credito(1000);
  conta1.debito(2000);
  cout <<"o valor na sua conta 1 eh\t"<< conta1.getSaldo() <<endl;
  Conta conta2(1000);
  conta2.credito(2000);
  conta2.debito(160);
  cout << "o valor na sua conta 2 eh\t"<< conta2.getSaldo() <<endl;
  return 0;
}

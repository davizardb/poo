#include <bits/stdc++.h>
#include "dataHeader.h"

using namespace std;

int main()
{
  int vaca,boi,cachorro;
  string sobrecarga;
  cout <<" informe o dia mes ano nessa ordem";
  cin >> vaca >> boi >> cachorro;
  cout << "informe o mes em caracteres";
  cin >> sobrecarga;
  cout <<"\n";
  Data a(vaca,boi,cachorro);
  cout << "quantidade de dias igual a:" << a.quantDias(boi) << "ou sobrecarregado" << a.quantDias(sobrecarga) << endl;
  return 0;
}

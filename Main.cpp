#include <iostream>
#include <bits/stdc++.h>
#include "racionalHeader.h"
//#define n 2;
using namespace std;

int main()
{
  int qnt;
  string num;
  string desc;
  float preco;
    NotaFiscal *nota1 = new NotaFiscal[2];
  float somaTotal=0.0;
    for (int i = 0; i < 2; i++)
  {
      cout << "Informe o número da " << i+1 << "° peça: ";
      cin >> num;
      nota1[i].setNumeroDaPeca(num);

      cout << "Informe a descricao da " << i+1 << "° peça: ";
      cin >> desc;
      nota1[i].setDescricaoDaPeca(desc);

      cout << "Informe a quantidade comprada da" << i+1 << "° peça";
      cin >> qnt;
      nota1[i].setQuantidadeComprada(qnt);

      cout << "Informe o preço da " << i+1 << "° peça:";
      cin >> preco;
      nota1[i].setPrecoDaPeca(preco);

      cout << endl;
  }
  cout << "Informações da Peça:\n\n";
    for (int i=0; i<2;i++)
  {
      cout << i+1 << "° peça:\n";
      cout << "Número: " << nota1[i].getNumeroDaPeca() << endl;
      cout << "Descrição: " << nota1[i].getDescricaoDaPeca() << endl;
      cout << "Quantidade: " << nota1[i].getQuantidadeComprada()<< endl;
      cout << "Preco em reaisi: " << nota1[i].getPrecoDaPeca()<<endl;
      cout << "Valor da nota em reaisi: " << nota1[i].getTotalNota() << endl;
           somaTotal += nota1[i].getTotalNota();
  }
  cout << "Valor Total em reais " << somaTotal << endl;
  return 0;
}

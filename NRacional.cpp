#include <iostream>
#include <bits/stdc++.h>
#include "racionalHeader.h"
using namespace std;


NumeroRacional::NumeroRacional(float n, float d)
{
      cout << "digite o numerador e o denominador >0 respectivamente" << endl;
      if(n<=0)
      {
          cout << "denominador negativo ou igual a zero" << endl;
      }
      else
      {
          numerador = n;
          denominador = d;
      }
}
void NumeroRacional::operator+(NumeroRacional fracaosomadora)
{
      soma = (numerador/denominador)+ fracaosomadora;
}
void NumeroRacional::operator-(NumeroRacional fracaosubtratora)
{
      subtracao = (numerador/denominador) - fracaosubtratora;
}
void NumeroRacional::operator*(NumeroRacional fracaomult)
{
      mult = (numerador/denominador) * fracaomult;
}
void NumeroRacional::operator/(NumeroRacional fracaodiv)
{
    div = (numerador/denominador) / fracaodiv;
}
void NumeroRacional::operator>(NumeroRacional fracaoMque)
{
      if (fracaoMque > (numerador/denominador))
      {
          cout << "fraçaõ maior que a inicial" << endl;          
      }
}
void NotaFiscal::setPrecoDaPeca(float preco)
{
      PrecodaPeca = preco;
}
float NotaFiscal::getPrecoDaPeca()
{
      return PrecodaPeca;
}
float NotaFiscal::getTotalNota()
{
      PrecoTotal= QComprada * PrecodaPeca;
      return PrecoTotal;
};

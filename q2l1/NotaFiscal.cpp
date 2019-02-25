#include <iostream>
#include <bits/stdc++.h>
#include "nfHeader.h"
using namespace std;


void NotaFiscal::setNumeroDaPeca(const string &num)
{
      NPeca = num;
}
string NotaFiscal::getNumeroDaPeca() const
{
      return NPeca;
}
void NotaFiscal::setDescricaoDaPeca(const string &desc)
{
      DescPeca = desc;
}
string NotaFiscal::getDescricaoDaPeca() const
{
      return DescPeca;
}
void NotaFiscal::setQuantidadeComprada(int qnt)
{
      QComprada = qnt;
}
int NotaFiscal::getQuantidadeComprada()
{
      return QComprada;
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

#include <iostream>
#include "nostafiscalHeader.h"
using namespace std;

NotaFiscal::NotaFiscal(const string &num, const string &desc, int qnt, float preco)
{
        NPeca = num;
        DescPeca = desc;
        QComprada = qnt;
        PrecodaPeca = preco;
}
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
}

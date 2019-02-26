#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class NotaFiscal
{
  public:
    void setNumeroDaPeca(const string &);
    string getNumeroDaPeca() const;
    void setDescricaoDaPeca(const string &);
    string getDescricaoDaPeca() const;
    void setQuantidadeComprada(int);
    int getQuantidadeComprada();
    void setPrecoDaPeca(float);
    float getPrecoDaPeca();
    float getTotalNota();
  private:
    string NPeca;
    string DescPeca;
    int QComprada;
    float PrecodaPeca;
    float PrecoTotal;
};

#include <iostream>

using namespace std;

class NotaFiscal
{
  public:
    NotaFiscal(const string &,const string &, int=0, float=0.0);
    void setNumeroDaPeca(const string &);
    string getNumeroDaPeca() const;
    void setDescricaoDaPeca(const string &);
    string getDescricaoDaPeca() const;
    void setQuantidadeComprada(int);
    int getQuantidadeComprada();
    void setPrecoDaPeca(float);
    float getPrecoDaPeca();
     getTotalNota()
  private:
    string NPeca;
    string DescPeca;
    int QComprada;
    float PrecodaPeca;
};

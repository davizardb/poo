#include <bits/stdc++.h>
using namespace std;

class Data
{
  public:
    Data (int=0, int=0, int=0);
    void setMes(int);
    int getMes();
    void setDia(int);
    int getDia();
    void setAno(int);
    int getAno();
    int quantDias(int);
    int quantDias(string);
  private:
    int mes;
    int dia;
    int ano;
};

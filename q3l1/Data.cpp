#include <bits/stdc++.h>
#include "dataHeader.h"
using namespace std;

Data::Data( int day, int month, int year)
{
  mes = month;
  dia = day;
  ano = year;
  if(month <=9 && day<=9)
  {
    cout << "Data:0" << day << "/" << "0" << month << "/" << year << endl;
  }
  else if (month <=9 && day>9)
  {
    cout << "Data: " << day << "/" << "0" << month << "/" << year << endl;
  }
  else if(day<=9 && month >9)
  {
    cout << "Data:0" << day << "/"  << month << "/" << year << endl;
  }
  else if(day>9 && month>9)
  {
    cout << "Data: "<< day <<"/"<< month <<"/"<< year << endl;
  }
}

void Data::setMes(int month)
{
    if(month >0 && month >=12)
    {
        mes=month;
    }
    else cout << "mês inválido\n";
}
int Data::getMes()
{
      return mes;
}
void Data::setDia(int day)
{
      if(day >0 && day >=31)
      {
         dia = day;
      }
      else cout << "dia inválido\n";
}
int Data::getDia()
{
      return dia;
}
void Data::setAno(int year)
{
    ano = year;
}
int Data::getAno()
{
    return ano;
}
int Data::quantDias(int mes)
{
      int diasDoMes=0;
      for(int i=1; i<mes+1;i++)
      {
          if(i%2==0)
          {
              diasDoMes +=30;
          }
          else diasDoMes +=31;
      }
      return  diasDoMes;
}
int Data::quantDias(string mes)
{
    string months[] = {"janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
    int a;
    int qntdias=0;
      for(int i=0;i<12;i++)
      {
          if(mes==months[i])
          {
            a = i+1;
            for(int i=1;i<a+1;i++)
            {
              if(i%2==0){qntdias+=30;}
              else {qntdias+=31;}
            }
          }
      }
  return qntdias;
}

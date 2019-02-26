#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class NumeroRacional
{
  public:
    NumeroRacional(float, float);
    void operator+(NumeroRacional);
    void operator-(NumeroRacional);
    void operator*(NumeroRacional);
    void operator/(NumeroRacional);
    void operator>(NumeroRacional);
    void operator<(NumeroRacional);
    void operator>=(NumeroRacional);
    void operator<=(NumeroRacional);
    void operator!=(NumeroRacional);
    void operator==(NumeroRacional);
  private:
    float numerador;
    float denominador;
    float soma;
    float subtracao;
    float mult;
    float div;
    float Mque;
    float Mnorque;
    float Migual;
    float Mnorigual;
    float dif;
    float igual;
};

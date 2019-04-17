#include <iostream>
#include <string>
using namespace std;

class Veiculo
{
    public:
    Veiculo();
    Veiculo(float, int, double);
    void setVelMAX(float);
    float getVelMAX();
    void setPassageiros(int);
    int getPassageiros();
    void setPot(double);
    double getPot();
    void print();
    private:
    float VelMAX;
    int passageiros;
    double potencia;
};
Veiculo::Veiculo(){}
Veiculo::Veiculo(float VelMAX, int passageiros, double potencia)
{
    setVelMAX(VelMAX);
    setPassageiros(passageiros);
    setPot(potencia);
}
void Veiculo::setVelMAX(float VelMAX)
{
    this->VelMAX=VelMAX;
}
float Veiculo::getVelMAX()
{
    return this->VelMAX;
}
void Veiculo::setPassageiros(int passageiros)
{
    this->passageiros=passageiros;
}
int Veiculo::getPassageiros()
{
    return this->passageiros;
}
void Veiculo::setPot(double potencia)
{
    this->potencia=potencia;
}
double Veiculo::getPot()
{
    return this->potencia;
}
void Veiculo::print()
{
    cout << "A caracteristicas do seu veículo são: \n";
    cout << "Velocidade Máxima: " << getVelMAX() << " km/h\n";
    cout << "Numero de assentos: " << getPassageiros() << " assentos \n";
    cout << "Potencia do motor: " << getPot() << " cv \n";
}
class VTerrestre: public virtual Veiculo
{
    private:
    int portas;
    int retrovisor;
    int bagageiros;
    public:
    VTerrestre();
    VTerrestre(float, int, double, int, int, int);
    void setPortas(int);
    int getPortas();
    void setRetrov(int);
    int getRetrov();
    void setBagager(int);
    int getBagager();
    void print();
};
VTerrestre::VTerrestre():Veiculo(){}
VTerrestre::VTerrestre(float VelMAX, int passageiros, double potencia, int portas, int retrovisor, int bagageiros):Veiculo(VelMAX, passageiros, potencia)
{
    setPortas(portas);
    setRetrov(retrovisor);
    setBagager(bagageiros);
}
void VTerrestre::setPortas(int portas)
{
    this->portas=portas;
}
int VTerrestre::getPortas()
{
    return this->portas;
}
void VTerrestre::setRetrov(int retrovisor)
{
    this->retrovisor=retrovisor;
}
int VTerrestre::getRetrov()
{
    return this->retrovisor;
}
void VTerrestre::setBagager(int bagageiros)
{
    this->bagageiros=bagageiros;
}
int VTerrestre::getBagager()
{
    return this->bagageiros;
}
void VTerrestre::print()
{
    Veiculo::print();
    cout << "Numero de portas:  " << getPortas() <<endl;
    cout << "Numero de retrovisores: " << getRetrov() << endl;
    cout << "Numero de bagageiros: " << getBagager() << endl;
}
class VAquatico: public virtual Veiculo
{
    private:
    float pesoMax;
    float dist;
    int colete;
    public:
    VAquatico();
    VAquatico(float, int, double, float, float, int);
    void setpesoMax(float);
    float getpesoMax();
    void setDist(float);
    float getDist();
    void setColete(int);
    int getColete();
    void print();
};
VAquatico::VAquatico():Veiculo(){}
VAquatico::VAquatico(float VelMAX, int passageiros, double potencia, float pesoMax, float dist, int colete):Veiculo(VelMAX, passageiros, potencia)
{
    setpesoMax(pesoMax);
    setDist(dist);
    setColete(colete);
}
void VAquatico::setpesoMax(float pesoMax)
{
    this->pesoMax=pesoMax;
}
float VAquatico::getpesoMax()
{
    return this->pesoMax;
}
void VAquatico::setDist(float dist)
{
    this->dist=dist;
}
float VAquatico::getDist()
{
    return this->dist;
}
void VAquatico::setColete(int colete)
{
    this->colete=colete;
}
int VAquatico::getColete()
{
    return this->colete;
}
void VAquatico::print()
{
    Veiculo::print();
    cout << "Peso máximo para submersão:  " << getpesoMax() <<"kgs\n";
    cout << "Distância máxima em alto mar: " << getDist() <<"km\n";
    cout << "Numero de coletes salva-vidas: " << getColete() << endl;
}
class VAnfibio: public virtual VAquatico, public virtual VTerrestre
{
    private:
    float horas;
    public:
    VAnfibio();
    VAnfibio(float, int, double, float, float, int, int, int, int, float);
    void setHoras(float);
    float getHoras();
    void print();
};
    VAnfibio::VAnfibio(){}
    VAnfibio::VAnfibio(float VelMAX, int passageiros, double potencia, float pesoMax, float dist, int colete, int portas, int retrovisor, int bagageiros, float horas):
    Veiculo(VelMAX, passageiros, potencia), 
    VAquatico(VelMAX, passageiros,potencia, pesoMax, dist, colete), 
    VTerrestre(VelMAX, passageiros, potencia, portas, retrovisor, bagageiros)
    {
        // setVelMAX(VelMAX);
        // setPassageiros(passageiros);
        // setPot(potencia);
        // setpesoMax(pesoMax);
        // setDist(dist);
        // setColete(colete);
        // setPortas(portas);
        // setRetrov(retrovisor);
        // setBagager(bagageiros);
        setHoras(horas);
    }
    void VAnfibio::setHoras(float horas)
    {
        this->horas=horas;
    }
    float VAnfibio::getHoras()
    {
        return this->horas;
    }
    void VAnfibio::print()
    {
        VTerrestre::print();
        cout << "Peso máximo para submersão:  " << getpesoMax() <<"kgs\n";
        cout << "Distância máxima em alto mar: " << getDist() <<"km\n";
        cout << "Numero de coletes salva-vidas: " << getColete() << endl;
        cout << "Tempo máximo em alto mar: " << getHoras()<< " horas \n";

    }
int main ()
{
    Veiculo A(180, 3, 190);
    A.print();
    cout << "----------------------------\n";
    VTerrestre B(200, 5, 155, 2, 3, 2);
    B.print();
    cout << "----------------------------\n";
    VAquatico C(150, 5, 167, 600, 3, 5 );
    C.print();
    cout << "----------------------------\n";
    VAnfibio D(100,6,166,900,1.125,3,0,3,3,9);
    D.print();
}
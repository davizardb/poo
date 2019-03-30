#include <bits/stdc++.h>
#define ety "--------------"

using namespace std;

class Veiculo 
{
public:
    Veiculo();
    Veiculo(double, double, double);
    void setPeso(double);
    double getPeso ();
    void setVelMAX (double);
    double getVelMAX();
    void setPreco(double);
    double getPreco();
    void print();

private:
    double peso;
    double velMax;
    double preco;
};
    
    Veiculo::Veiculo(){}
  
    Veiculo::Veiculo(double peso, double velMax, double preco)
    {
        setPeso(peso);
        setVelMAX(velMax);
        setPreco(preco);
    }
    void Veiculo::setPeso(double peso)
    {
        if (peso>0)
        this->peso=peso;
        else this->peso=0;
    }
    double Veiculo::getPeso()
    {   
        return this->peso;
    }
    void Veiculo::setVelMAX(double velMax)
    {   
        if(velMax>0)
        this->velMax=velMax;
        else this->velMax=0;
    }
    double Veiculo::getVelMAX()
    {
        return this->velMax;
    }
    void Veiculo::setPreco(double preco)
    {   
        if(preco>0)
        this->preco=preco;
        else this->preco=0;
    }
    double Veiculo::getPreco()
    {
        return this->preco;
    }
        void Veiculo::print()
    {
        cout << "Seu Veiculo possui os seguintes dados" << endl;
        cout << "Peso: " << getPeso() << " toneladas\n";
        cout << "Velocidade Máxima:  " << getVelMAX() <<"km/h\n";
        cout << "Valor:  " << getPreco() << ",00 R$.\n";
    } 

    class Motor 
    {
    public:
        Motor();
        Motor(double, double);
        void setCilindros(double);
        double getCilindros();
        void setPot(double);
        double getPot();
        void print();
    private:
        double cilindradas;
        double potencia;
    };
    Motor::Motor(){}
    Motor::Motor(double cilindradas, double potencia)
    {
        setCilindros(cilindradas);
        setPot(potencia);
    }
    void Motor::setCilindros(double cilindradas)
    {
        if(cilindradas>0)    
        this->cilindradas=cilindradas;
        else this->cilindradas=0;
    }    
    double Motor::getCilindros()
    {
        return this->cilindradas;
    }
    void Motor::setPot(double potencia)
    {
        if(potencia>0)    
        this->potencia=potencia;
        else this->potencia=0;
    }
    double Motor::getPot()
    {
        return this->potencia;
    }
    void Motor::print()
    {
        cout << "Cilindros do carro:  " << getCilindros() << " cilindros\n";
        cout << "Potencia :  " << getPot() << " cavalos de potencia\n";
    }
    class CarroPasseio: public Veiculo, public Motor
    {
        public:
        CarroPasseio();
        CarroPasseio(double, double, double, double, double, string, string);
        void setModel(string);
        string getModel();
        void setCor(string);
        string getCor();
        void print();
        private:
        string modelo;
        string cor;
    };
        CarroPasseio::CarroPasseio():Veiculo(),Motor(){}
        CarroPasseio::CarroPasseio(double peso, double velMax, double preco, double cilindradas, double potencia, string modelo, string cor):Veiculo(peso, velMax, preco),Motor(cilindradas, potencia)
        {
            setModel(modelo);
            setCor(cor);
        }
        void CarroPasseio::setModel(string modelo)
        {
            this->modelo=modelo;
        }
        string CarroPasseio::getModel()
        {
            return this->modelo;
        }
        void CarroPasseio::setCor(string cor)
        {
            this->cor=cor;
        }
        string CarroPasseio::getCor()
        {
            return this->cor;
        }
        void CarroPasseio::print()
        {
            cout << "Modelo:  " << getModel() << endl;
            cout << "Cor:  " << getCor() << endl;
            Veiculo::print();
            Motor::print();
            
        }

        int main ()
    {
       Veiculo B(1.7, 210, 90020);
       B.print();
       Motor a(4, 139);
       a.print();
       CarroPasseio X(1.527, 192, 111990, 4, 166, "Jeep Compass Sport 2.0", "Preta");
       cout << endl << ety << ety << ety <<endl;
       X.print();
    }
#include <iostream>
#include <iomanip>

using namespace std;

class Formato 
{
    public:
    Formato (){};
    virtual ~Formato(){ // ITEM C
        cout << "Formato" << endl;};
    virtual void getArea()=0;
    virtual void getVolume()=0;
    private:
};
class FormaBidimensional: public Formato
{
    public:
    FormaBidimensional(){};
    ~FormaBidimensional(){ // ITEM A
        cout <<"FormaBidimensional"<< endl;};
    virtual void getArea()=0; // ITEM A
    virtual void getVolume()=0;
};
class FormaTridimensional: public Formato
{
    public:
    FormaTridimensional(){};
    ~FormaTridimensional(){ // ITEM C
        cout << "FormaTridimensional"<<endl;};
    virtual void getArea()=0; // ITEM B
    virtual void getVolume()=0;
    private:
};
class Circulo: public FormaBidimensional
{
    public:
    float raio;
    Circulo(){};
    Circulo(float raio){if (raio > 0) this->raio=raio;
                            else this->raio=0;
    };
    ~Circulo(){cout << "Circulo" << endl;}; // ITEM C
    virtual void getArea(){ // ITEM A
        cout << "Forma Bidimensional --> Circulo\n" << endl; // ITEM E-F
        cout << "\tA área é : " << ((this->raio*this->raio)*3.14)<< endl<<endl;}; // ITEM F
    virtual void getVolume(){};    
};

class Quadrado: public FormaBidimensional
{
    public: 
    float lado;
    Quadrado(){};
    Quadrado(float lado){if (lado > 0) this->lado=lado;
                            else this->lado=0;};
    ~Quadrado(){cout << "Quadrado"<< endl;}; // ITEM C
    virtual void getArea(){ // ITEM A
        cout << "Forma Bidimensional --> Quadrado\n" << endl; // ITEM E-F
        cout << "\tA área é: " << (this->lado*this->lado) << endl<<endl;}; // ITEM F
    virtual void getVolume(){};    
};
    
class Triangulo: public FormaBidimensional
{
    public:
    float base; 
    float altura;
    Triangulo(){};
    Triangulo(float base, float altura){if (base > 0) this->base=base;
                            else this->base=0;
                                        if (altura > 0) this->altura=altura;
                            else this->altura=0;
                          
                            };
    ~Triangulo(){cout << "Triangulo"<< endl;}; // ITEM C
    virtual void getArea(){ // ITEM A
             cout << "Forma Bidimensional --> Triangulo\n" << endl;
             cout << "\tA área é: " << (((this->base)*(this->altura))/2)<< endl<<endl; // ITEM E-F
    };
    virtual void getVolume(){}; 
};
class Esfera: public FormaTridimensional
{
    public:
    float raio;    
    Esfera(){};
    Esfera(float raio){if (raio > 0) this->raio=raio;
                            else this->raio=0;};
    ~Esfera(){cout << "Esfera"<< endl;}; // ITEM C
    virtual void getArea(){ // ITEM B
        cout << "Forma Tridimensional --> Esfera\n" << endl; // ITEM E-F
        cout << "\tA área é: " <<(this->raio*this->raio*4*3.14)<< endl; // ITEM F
    };
    virtual void getVolume(){ // ITEM B
        cout << "\tO volume é: " << (((this->raio*this->raio*this->raio)*(4*3.14))/3)<< endl<<endl;
    };
};
class Cubo: public FormaTridimensional
{
    public:
    float lado;
    Cubo(){};
    Cubo(float lado){if (lado > 0) this->lado=lado;
                            else this->lado=0;};
    ~Cubo(){cout << "Cubo"<< endl;}; // ITEM C
    virtual void getArea(){ // ITEM B
        cout << "Forma Tridimensional --> Cubo\n" << endl; // ITEM E-F
        cout << "\tA área é: "<<(this->lado*this->lado*6)<<endl; // ITEM F
    };
    virtual void getVolume(){ // ITEM B
        cout << "\tO volume é: " <<(this->lado*this->lado*this->lado)<<endl<<endl;
    };
};
class Tetraedro: public FormaTridimensional
{
    public:
    float altura;
    float base;
    Tetraedro(){};
    Tetraedro(float base, float altura){if (base > 0) this->base=base;
                            else this->base=0;
                            if (altura > 0) this->altura=altura;
                            else this->altura=0;
                    };
    ~Tetraedro(){cout << "Tetraedro"<<endl;}; // ITEM C
    virtual void getArea(){ // ITEM B
            cout << "Forma Tridimensional --> Tetraedro\n" << endl; // ITEM E-F
            cout << "\tA área é: " <<((this->base*this->base)+(this->altura*this->base*1.4))<< endl; // ITEM F
 
    };
    virtual void getVolume() // ITEM B 
    {
            cout << "\tO volume é: " << ((this->base*this->base*this->altura)/3) << endl<<endl;
    };
};


int main()
{   
    cout << fixed << setprecision(2);
    // ITEM D
     Formato *Exemplo[] = {new Circulo(2.3), new Quadrado(5) , new Triangulo(2,10),
                       new Esfera(6.5), new Cubo(5), new Tetraedro(2,5)}; 
    cout << "\n\tBidimensionais\n\n";
    Exemplo[0]->getArea();
    Exemplo[1]->getArea();
    Exemplo[2]->getArea();
    cout << "\n\tTridimensionais\n\n";
    Exemplo[3]->getArea();
    Exemplo[3]->getVolume();
    Exemplo[4]->getArea();
    Exemplo[4]->getVolume();
    Exemplo[5]->getArea();
    Exemplo[5]->getVolume();

   
    for(int i = 0; i < 6; i++) { // ITEM G
        delete Exemplo[i];
    } 
}


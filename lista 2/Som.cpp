#include <iostream>

using namespace std;

class Laurasiatheria 
{
    public:
    virtual void Som()=0;
}; 
class Carnivora: public Laurasiatheria
{   
    public:
    virtual void Som()=0;
};
class Perissodactyla: public Laurasiatheria
{
    public:
    virtual void Som()=0;
};
class Artiodatyla: public Laurasiatheria
{
    public:
    virtual void Som()=0;
};
class Cao: public Carnivora
{
    public:
    virtual void Som()
    {
        cout << "Latino" << endl;
    }
};
class Gato: public Carnivora
{
    public:
    virtual void Som()
    {
        cout << "Miado" << endl;
    }
};
class Cavalo: public Perissodactyla
{
    public:
    virtual void Som()
    {
        cout << "Relinchado" << endl;
    }
};
class Porco: public Artiodatyla
{
    public:
    virtual void Som()
    {
        cout << "Roncar" << endl;
    }
};
class Boi: public Artiodatyla
{
    public:
    virtual void Som(){
        cout << "Mujido" << endl;
    }
};

    int main()
{
    Laurasiatheria *Animals[] = {new Boi,new Cao, new Cavalo, new Gato,new Porco};
    for (int i=0; i<5; i++)
    {
        Animals[i]->Som();
    }
    Animals[2]->Som();
    Animals[0]->Som();
}
#include <iostream>
#include <string>
#define ety "--------------"

using namespace std;

class Empresa 
{
public:
    Empresa();
    Empresa(string, string, string, string, string, string);
    void setNome(string);
    string getNome ();
    void setEndereco (string);
    string getEndereco();
    void setCidade(string);
    string getCidade();
    void setEstado(string);
    string getEstado();
    void setCep(string);
    string getCep();
    void setTel(string);
    string getTel();
    void print();

private:
    string nome;
    string endereco;
    string cidade;
    string estado;
    string cep;
    string telefone;
};
    
    Empresa::Empresa(){}
    // {
    //     this->nome = setNome(ety);
    //     this->endereco = setEndereco(ety);
    //     this->cidade = setCidade(ety);
    //     this->estado = setEstado(ety);
    //     this->cep = setCep(ety);
    //     this->telefone = setTel(ety);
    // }
    Empresa::Empresa(string nome,string endereco,string cidade,string estado,string cep,string telefone)
    {
        setNome(nome);
        setEndereco(endereco);
        setCidade(cidade);
        setEstado(estado);
        setCep(cep);
        setTel(telefone);
    }
    void Empresa::setNome(string nome)
    {
        this->nome=nome;
    }
    string Empresa::getNome()
    {   
        return this->nome;
    }
    void Empresa::setEndereco(string endereco)
    {   
        this->endereco=endereco;
    }
    string Empresa::getEndereco()
    {
        return this->endereco;
    }
    void Empresa::setCidade(string cidade)
    {
        this->cidade=cidade;
    }
    string Empresa::getCidade()
    {
        return this->cidade;
    }
    void Empresa::setEstado(string estado)
    {
        this->estado=estado;
    }
    string Empresa::getEstado()
    {
        return this->estado;
    }
    void Empresa::setCep(string cep)
    {
        this->cep=cep;
    }
    string Empresa::getCep()
    {
        return this->cep=cep;
    }
    void Empresa::setTel(string telefone)
    {
        this->telefone=telefone;
    }
    string Empresa::getTel()
    {
        return this->telefone;
    }
    void Empresa::print()
    {
        cout << "Sua empresa inseriu os seguintes dados" << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Endereço:  " << getEndereco() << endl;
        cout << "Cidade:  " << getCidade() << endl;
        cout << "Estado:  " << getEstado() << endl;
        cout << "CEP:  " << getCep() << endl;
        cout << "Telefone:  " << getTel() << endl;
    }

    class Restaurante: public Empresa 
    {
    public:
        Restaurante();
        Restaurante(string, string, string, string, string, string, string, float);
        void setComida(string);
        string getComida();
        void setPreco(float);
        float getPreco();
        void print();
    private:
        string comida;
        float precoM;
    };
    Restaurante::Restaurante():Empresa(){}
    Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string cep, string telefone, string comida, float precoM):Empresa(nome, endereco, cidade, estado, cep, telefone)
    {
        setComida(comida);
        setPreco(precoM);
    }
    void Restaurante::setComida(string comida)
    {
        this->comida=comida;
    }    
    string Restaurante::getComida()
    {
        return this->comida;
    }
    void Restaurante::setPreco(float precoM)
    {
        this->precoM=precoM;
    }
    float Restaurante::getPreco()
    {
        return this->precoM;
    }
    void Restaurante::print()
    {
        Empresa::print();
        cout << "Tipo de comida:  " << getComida() << endl;
        cout << "Preço médio:  " << getPreco() << endl;
    }
        int main ()
    {
       Restaurante A(ety,ety,ety,ety,ety,ety,ety,0);
	A.print();
       Restaurante B("Dinogay", "Uece", "Fortalcity", "Ceara", "6077777-77", "3232323", "Ovo cru", 700.99);
       B.print();
    }

#include <iostream>

using namespace std;

class Carro{
private:
    string marca;
    string modelo;
    int ano;
    float valor;
public:
    Carro(){
        marca = "Indefinido";
        modelo = "Indefinido";
        ano = 0;
        valor = 0.0;
    }
    Carro(string marca, string modelo, int ano, float valor){
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->valor = valor;
    }
    string getMarca(){
        return marca;
    }
    void setMarca(string mar){
        marca = mar;
    }
    
    string getModelo(){
        return modelo;
    }
    void setModelo(string mod){
        modelo = mod;
    }
    
    int getAno(){
        return ano;
    }
    void setAno(int a){
        ano = a;
    }
    
    float getValor(){
        return valor;
    }
    void setValor(float v){
        valor = v;
    }
};

int main(){
    Carro carro1;
    Carro carro2("Honda", "Civic", 2018, 85000);
    Carro carro3;

    string marca, modelo; int ano; float valor;

    cout << "Digite a marca: ";
    getline (cin, marca);
    cout << "Digite o modelo: ";
    getline(cin, modelo);
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o valor: ";
    cin >> valor;

    carro3.setMarca(marca); 
    carro3.setModelo(modelo);
    carro3.setAno(ano);
    carro3.setValor(valor);
    
    cout << "\nCarro 1: marca = " << carro1.getMarca() << ", modelo = " << carro1.getModelo() << ", ano = " << carro1.getAno() << ", valor = " << carro1.getValor() << endl;
    cout << "Carro 2: marca = " << carro2.getMarca() << ", modelo = " << carro2.getModelo() << ", ano = " << carro2.getAno() << ", valor = " << carro2.getValor() << endl;
    cout << "Carro 1: marca = " << carro3.getMarca() << ", modelo = " << carro3.getModelo() << ", ano = " << carro3.getAno() << ", valor = " << carro3.getValor();

    return 0;
}
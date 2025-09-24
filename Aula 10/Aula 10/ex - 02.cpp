#include <iostream>
#include <string>

using namespace std;

class Carro{
private:
    string marca;
    string modelo;
    int ano;
    float valor;
public:
    //construtores
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
    //metodos get e set
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
    //metodos
    void mostrarDados(){
        cout << "Dados do carro: " << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Valor: " << valor << endl;
    }
    void calcularDesconto(float percentual){
        float valorDesconto = valor - (valor * (percentual/100));
        cout << "Valor com desconto de " << percentual << "%: " << valorDesconto << endl;
    }
    void alterarValor(float novoValor){
        valor = novoValor;
        cout << "Novo valor: " << valor << endl << endl;
    }
};

int main(){
    Carro carro1;
    Carro carro2;

    string marca, modelo; int ano; float valor, novoValor[2], percentual[2];

    cout << "--- Primeiro carro ---" << endl;
    cout << "Digite a marca: ";
    getline (cin, marca);
    cout << "Digite o modelo: ";
    getline(cin, modelo);
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o valor: ";
    cin >> valor;
    cout << "Digite o valor de desconto: ";
    cin >> percentual[0];
    cout << "Digite o novo valor: ";
    cin >> novoValor[0];
    cout << "----------------------" << endl << endl;

    carro1.setMarca(marca); 
    carro1.setModelo(modelo);
    carro1.setAno(ano);
    carro1.setValor(valor);

    cin.ignore();

    cout << "--- Segundo carro ---" << endl;
    cout << "Digite a marca: ";
    getline (cin, marca);
    cout << "Digite o modelo: ";
    getline(cin, modelo);
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o valor: ";
    cin >> valor;
    cout << "Digite o valor de desconto: ";
    cin >> percentual[1];
    cout << "Digite o novo valor: ";
    cin >> novoValor[1];
    cout << "----------------------" << endl << endl;

    carro2.setMarca(marca); 
    carro2.setModelo(modelo);
    carro2.setAno(ano);
    carro2.setValor(valor);

    carro1.mostrarDados();
    carro1.calcularDesconto(percentual[0]);
    carro1.alterarValor(novoValor[0]);
    
    carro2.mostrarDados();
    carro2.calcularDesconto(percentual[1]);
    carro2.alterarValor(novoValor[1]);

    return 0;
}
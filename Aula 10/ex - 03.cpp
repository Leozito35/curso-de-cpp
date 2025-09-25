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
        cout << "Marca: " << marca << " | Modelo: " << modelo << " | Ano: " << ano << " | Valor: " << valor << endl << endl;

    }
    float calcularDesconto(float percentual){
        float valorDesconto = valor - (valor * (percentual/100));
        return valorDesconto;
    }
    void alterarValor(float novoValor){
        valor = novoValor;
        cout << "Novo valor: " << valor << endl << endl;
    }
};

int main(){
    Carro carros[10];
    int tamanho;
    cout << "Quantos carros deseja cadastrar? ";
    cin >> tamanho;
    if (tamanho < 1){
        cout << "Tamanho invalido, redefinido para 1";
        tamanho = 1;
    }
    else if (tamanho > 10){
        cout << "tamanho invalido, redefinido para 10";
        tamanho = 10;
    }

    for (int i = 0; i < tamanho; i++){
        cin.ignore();
        string marca, modelo; int ano; float valor;
        
        cout << "--- Cadastro do carro " << i + 1 << " ---" << endl;
        cout << "Marca: ";
        getline(cin, marca);
        cout << "Digite o modelo: ";
        getline(cin, modelo);
        cout << "Digite o ano: ";
        cin >> ano;
        cout << "Digite o valor: ";
        cin >> valor;

        carros[i].setMarca(marca); 
        carros[i].setModelo(modelo);
        carros[i].setAno(ano);
        carros[i].setValor(valor);
    }
    int indice; float perc;

    cout << "\nDigite o indice do carro para aplicar desconto: ";
    cin >> indice;
    cout << "Digite o percentual de desconto: ";
    cin >> perc;

    cout << "Lista de Carros: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "[" << i+1 << "] ";
        carros[i].mostrarDados();
    }
    
    cout << "Preco do carro " << indice << " com desconto de " << perc << "%: " << carros[indice - 1].calcularDesconto(perc);
    return 0;
}
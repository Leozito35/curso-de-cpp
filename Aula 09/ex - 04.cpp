#include <iostream>
#include <iomanip>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
    };
struct Produto{
    string nome;
    float valor;
    int qtd;
    Data validade;

    Produto(){
        nome = "indefinido";
        valor = 0.0;
        qtd = 0;
        validade = {00, 00, 00};
    }
    Produto(string nome, float valor, int qtd, Data validade){
        this->nome = nome;
        this->qtd = qtd;
        this->valor = valor;
        this->validade = validade;
    }
    void MostrarDados(){
        cout << "Nome: " << nome << endl;
        cout << "Valor: " << valor << endl;
        cout << "Quantidade: " << qtd << endl;
        cout << "Validade: "
        << setfill('0') << setw(2) << validade.dia << "/" << setfill('0') << setw(2) << validade.mes << "/" << validade.ano << endl;
        cout << "Valor em estoque: " << valorEstoque(valor, qtd) << endl << endl;
    }
    float valorEstoque(float valor, int qtd){
        return valor * qtd;
    }
    
};

int main(){
    Produto produtos[3];

    produtos[1].nome = "Caneta";
    produtos[1].valor = 2.5;
    produtos[1].qtd = 10;
    produtos[1].validade = {10, 10, 2025}; 

    cout << "Digite o nome do produto: ";
    cin >> produtos[2].nome;
    cout << "Digite o valor do produto: ";
    cin >> produtos[2].valor;
    cout << "Digite a quantidade disponivel: ";
    cin >> produtos[2].qtd;
    cout << "Digite a validade (dia mes ano): ";
    cin >> produtos[2].validade.dia >> produtos[2].validade.mes >> produtos[2].validade.ano;

    for(int i = 0; i < 3; i++){
        cout << "\nProduto " << i + 1 << ": \n";
        produtos[i].MostrarDados();
        cout << "----------------------\n";
    }

    return 0;
}
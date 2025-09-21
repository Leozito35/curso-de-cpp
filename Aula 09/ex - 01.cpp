#include <iostream>

using namespace std;

struct Produto{
string nome;
float valor;
int qtd;

Produto(){
    nome = "indefinido";
    valor = 0.0;
    qtd = 0;
}
Produto(string nome, float valor, int qtd){
    this->nome = nome;
    this->qtd = qtd;
    this->valor = valor;
}
};

int main(){
    Produto produto1;
    Produto produto2("Caneta", 2.5, 10);
    Produto produto3;

    cout << "Digite o nome do produto: ";
    cin >> produto3.nome;
    cout << "Digite o valor do produto: ";
    cin >> produto3.valor;
    cout << "Digite a quantidade disponivel: ";
    cin >> produto3.qtd;
    
    cout << "\n\nProduto 1: \n";
    cout << "Nome: " << produto1.nome << endl;
    cout << "Valor: " << produto1.valor << endl;
    cout << "Quantidade: " << produto1.qtd << endl << endl;

    cout << "Produto 2: \n";
    cout << "Nome: " << produto2.nome << endl;
    cout << "Valor: " << produto2.valor << endl;
    cout << "Quantidade: " << produto2.qtd << endl << endl;

    cout << "Produto 3: \n";
    cout << "Nome: " << produto3.nome << endl;
    cout << "Valor: " << produto3.valor << endl;
    cout << "Quantidade: " << produto3.qtd << endl << endl;

    return 0;
}
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
void MostrarDados(){
    cout << "Nome: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Quantidade: " << qtd << endl;
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

    cout << "Digite o nome do produto: ";
    cin >> produtos[2].nome;
    cout << "Digite o valor do produto: ";
    cin >> produtos[2].valor;
    cout << "Digite a quantidade disponivel: ";
    cin >> produtos[2].qtd;

    for(int i = 0; i < 3; i++){
        cout << "\nProduto " << i + 1 << ": \n";
        produtos[i].MostrarDados();
        cout << "----------------------\n";
    }

    return 0;
}
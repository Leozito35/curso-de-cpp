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
    Produto produto1;
    Produto produto2("Caneta", 2.5, 10);
    Produto produto3;

    cout << "Digite o nome do produto: ";
    cin >> produto3.nome;
    cout << "Digite o valor do produto: ";
    cin >> produto3.valor;
    cout << "Digite a quantidade disponivel: ";
    cin >> produto3.qtd;

    cout << "produto 1: \n"; 
    produto1.MostrarDados();    
    cout << "produto 2: \n"; 
    produto2.MostrarDados();
    cout << "produto 3: \n"; 
    produto3.MostrarDados();  



    return 0;
}
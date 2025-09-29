#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

const int MAX = 100; 

class Produto{
protected:
    string nome;
    float valor;
    int quantidade;
public:
    //Construtores
    Produto(){
        nome = "Indefinido";
        valor = 0.0;
        quantidade = 0;
    }
    Produto(string nome, float valor, int quantidade){
        this->nome = nome;
        this->valor = valor;
        this->quantidade = quantidade;
    }

    //Encapsulamento
    string getNome() const { return nome;}
    float getValor() const { return valor;}
    int getQtd() const { return quantidade;}

    void setNome(string n){ nome = n; }
    void setValor(float valor){
        if (valor > 0 && valor < 100000){
            this->valor = valor;
        } else {
            cout << "Valor invalido!" << endl;
            this->valor = 0.0;
        }
    }
    void setQtd(int quantidade){
        if (quantidade > 0 && quantidade < 1000){
            this->quantidade = quantidade;
        } else {
            cout << "Quantidade invalida" << endl;
            this->quantidade = 0;
        }

    }

    //Metódos
    void mostrarProduto() const {
        cout << "Nome: " << nome << endl;
        cout << "Valor: " << valor << endl;
        cout << "Quantidade: " << quantidade << endl << endl;
    }
};

class Venda : public Produto{
private:
    int qtdVendida;
public:
    Venda(string nome, float valor, int quantidade, int qtdVendida) : Produto(nome, valor, quantidade){
        this->qtdVendida = qtdVendida;
    }

    int getQtdVendida() const { return qtdVendida;}
    void setQtdVendida(int qtdVendida) { this->qtdVendida = qtdVendida;}

    float calcularVenda(int qtdVendida, float valor) { return valor * qtdVendida;}
};

int menu();
void criarProduto(vector<Produto> &estoque);
void atualizarProduto(vector<Produto> &estoque);
void addEstoque(vector<Produto> &estoque);
void visuProdutos(const vector<Produto> &estoque);
void excluirProduto(vector<Produto> &estoque);
void buscarProduto(const vector<Produto> &estoque);
void registrarVenda(vector<Produto> &estoque, vector<Venda> &vendas);
void relatorio(vector<Produto> &estoque, vector<Venda> &vendas);

void salvarDados();
void carregarDados();


int main(){
    vector <Produto> estoque; vector <Venda> vendas;
    carregarDados();
    int opcao;
    do{
        opcao = menu();
        switch(opcao){
            case 1:
                criarProduto(estoque);
                break;
            case 2:
                atualizarProduto(estoque);
                break;
            case 3:
                addEstoque(estoque);
                break;
            case 4:
                visuProdutos(estoque);
                break;
            case 5:
                excluirProduto(estoque);
                break;
            case 6:
                buscarProduto(estoque);
                break;
            case 7:
                registrarVenda(estoque, vendas);
                break;
            case 8:
                relatorio(estoque, vendas);
                break;
            case 9:
                cout << "Saindo..." << endl;
                salvarDados();
                break;
        }
    } while(opcao != 9);

    return 0;
}
int menu(){
    cout << "=============== Gerenciamento de loja ===============" << endl;
    cout << "1 - Cadastrar produto        6 - Busca de produto" << endl;
    cout << "2 - Atualizar produto        7 - Registrar venda" << endl;
    cout << "3 - Adicionar no estoque     8 - Relatório de vendas" << endl;
    cout << "4 - Visualizar produtos      9 - Sair" << endl;
    cout << "5 - Excluir produto" << endl;
    cout << "=============== Gerenciamento de loja ===============" << endl << endl;

    int opcao;
    cout << "Escolha a opcao: ";
    cin >> opcao;
    return opcao;
}
void criarProduto(vector<Produto> &estoque) {
    if (estoque.size() > 100){
        cout << "Estoque cheio!";
        return;
    }
    
    cin.ignore();

    string nome; float valor; int quantidade;

    cout << "Digite o nome do produto: ";
    getline(cin, nome);
    cout << "Digite o valor do produto: ";
    cin >> valor;
    cout << "Digite a quantidade disponivel: ";
    cin >> quantidade;

    estoque.push_back(Produto(nome, valor, quantidade));
    cout << "Produto cadastrado com sucesso!" << endl;

    
}
void atualizarProduto(vector<Produto> &estoque) {
    if (estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }
    cin.ignore();
    string nomeBusca;
    cout << "Digite o nome do produto que deseja buscar: ";
    getline(cin, nomeBusca);

    for (auto &a : estoque){
        if (a.getNome() == nomeBusca){
            string novoNome; float novoValor; int novaQtd;
            
            cout << "Novo nome: ";
            cin >> novoNome;
            cout << "Novo valor: ";
            cin >> novoValor;
            cout << "Nova quantidade: ";
            cin >> novaQtd;

            a.setNome(novoNome);
            a.setQtd(novaQtd);
            a.setValor(novoValor);
        }
    }
    cout << "Produto nao encontrado!";
}
void addEstoque(vector<Produto> &estoque) {
    if (estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }
    cin.ignore();
    string nomeBusca; int SomaQtd;
    cout << "Digite o nome do produto: ";
    getline(cin, nomeBusca);

    cout << "Quantidade para adicionar no estoque: ";
    cin >> SomaQtd;

    for (auto &a : estoque){
        if(a.getNome() == nomeBusca){
            int qtd = a.getQtd();
            a.setQtd(qtd + SomaQtd);
            return;
        }
    }
    cout << "Produto nao encontrado!";
}
void visuProdutos(const vector<Produto> &estoque) {
    if (estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }
    int i = 1;
    for (const auto &a : estoque){
        cout << "Produto " << i << ":" << endl;
        a.mostrarProduto();
        i++;
    }
}  
void excluirProduto(vector<Produto> &estoque){
    if (estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }
}
void buscarProduto(const vector<Produto> &estoque){
    if (estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
        return;
    }
    cin.ignore();
    string nomeBusca;
    cout << "Digite o nome do produto: ";
    getline (cin, nomeBusca);

    for (const auto &a : estoque){
        if (nomeBusca == a.getNome()){
            a.mostrarProduto();
        }
    }
}
void registrarVenda(vector<Produto> &estoque, vector<Venda> &vendas){
    if(estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
    }
    cin.ignore();
    string nomeVenda;
    cout << "Digite o produto vendido: ";
    getline(cin, nomeVenda);
}
void relatorio(vector<Produto> &estoque, vector<Venda> &vendas){

}
void salvarDados(vector<Produto> &estoque, vector<Venda> &vendas){
    ofstream arquivo("gerenciamento.txt");

    if (!arquivo.is_open()){
    cout << "Erro ao abrir o arquivo para salvar!\n";
    return;
    }

    for (const auto &a : estoque){
    arquivo << a.getNome() << "," << a.getQtd() << "," << a.getValor() << "\n";
    }

    arquivo.close();
    cout << "Dados salvos com sucesso!\n";
}
void carregarDados(){

}
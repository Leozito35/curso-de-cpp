#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

const int MAX = 100; 

class Item{
protected:
    string nome;
    float valor;
public:
    Item(){
        nome = "Indefinido";
        valor = 0;
    }
    Item(string nome, float valor){
        this->nome = nome;
        this->valor = valor;
    }

    string getNome() const { return nome;}
    float getValor() const { return valor;}
    
    void setNome(string n){ nome = n; }
    void setValor(float valor){
        if (valor > 0 && valor < 100000){
            this->valor = valor;
        } else {
            cout << "Valor invalido!" << endl;
            this->valor = 0.0;
        }
    }
};
class Produto : public Item{
private:
    int quantidade;
public:
    //Construtores
    Produto() : Item(){
        quantidade = 0;
    }
    Produto(string nome, float valor, int quantidade) : Item(nome, valor){
        this->quantidade = quantidade;
    }

    //Encapsulamento
    int getQtd() const { return quantidade;}

    
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
class Venda : public Item{
private:
    int qtdVendida;
public:
    Venda(string nome, float valor, int qtdVendida) : Item(nome, valor){
        this->qtdVendida = qtdVendida;
    }

    int getQtdVendida() const { return qtdVendida;}
    void setQtdVendida(int qtdVendida) { this->qtdVendida = qtdVendida;}
    
    float calcularVenda() { return valor * qtdVendida;}
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
void salvarDados(vector<Produto> &estoque, vector<Venda> &vendas);
void carregarDados(vector<Produto> &estoque, vector<Venda> &vendas);


int main(){
    vector <Produto> estoque; vector <Venda> vendas;
    carregarDados(estoque, vendas);
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
                salvarDados(estoque, vendas);
                break;
            default:
                cout << "Opção inválida." << endl;
        }
    } while(opcao != 9);

    return 0;
}
int menu(){
    cout << "\n=============== Gerenciamento de loja ===============" << endl;
    cout << "1 - Cadastrar produto        6 - Busca de produto" << endl;
    cout << "2 - Atualizar produto        7 - Registrar venda" << endl;
    cout << "3 - Adicionar no estoque     8 - Relatório de vendas" << endl;
    cout << "4 - Visualizar produtos      9 - Sair" << endl;
    cout << "5 - Excluir produto" << endl;
    cout << "=============== Gerenciamento de loja ===============" << endl << endl;

    int opcao;
    cout << "Escolha a opcao: ";
    cin >> opcao;
    cout << endl;
    return opcao;
}
void criarProduto(vector<Produto> &estoque) {
    if (estoque.size() >= 100){
        cout << "Estoque cheio!" << endl << endl;
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
            return;
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

    cin.ignore();
    string nomeBusca;
    cout << "\nDigite o nome do produto que deseja remover: ";
    getline(cin, nomeBusca);
    
    for (auto it = estoque.begin(); it != estoque.end(); ++it){
        if (it->getNome() == nomeBusca){
          estoque.erase(it);
          cout << "Produto removido com sucesso!\n";
          return;
        }
    }
    cout << "Produto não encontrado.\n";
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
            return;
        }
    }
    cout << "Produto não encontrado!" << endl;
}
void registrarVenda(vector<Produto> &estoque, vector<Venda> &vendas){
    if(estoque.empty()){
        cout << "Nenhum produto cadastrado!" << endl;
    }
    cin.ignore();
    string nomeVenda;
    cout << "Digite o produto vendido: ";
    getline(cin, nomeVenda);
    
    for (auto &produto : estoque){
        if (produto.getNome() == nomeVenda){
            int qtd;
            cout << "Digite a quantidade desejada: ";
            cin >> qtd;
            if (produto.getQtd() < qtd){
                cout << "Quantidade acima do estoque! Venda não realizada!" << endl;
                cout << "Quantidade disponivel: " << produto.getQtd() << endl;
                return;
            }
            //atualiza estoque
            produto.setQtd(produto.getQtd() - qtd);
            
            //registra venda
            vendas.push_back(Venda(produto.getNome(), produto.getValor(), qtd));
            cout << "Venda registrada com sucesso! Total de " << qtd * produto.getValor() << "$" << endl;
        }
    }
    
}
void relatorio(vector<Produto> &estoque, vector<Venda> &vendas){
    cout << "=== Relatorio Geral ===" << endl;
    if (estoque.empty()){
        cout << "Sem produtos cadastrados." << endl;
    } else {
        cout << "Produtos cadastrados: " << estoque.size() << endl;
        for(auto &produto : estoque){
            produto.mostrarProduto();
        }
    } 
    
    if (vendas.empty()){
        cout << "Não foi realizado nenhuma venda." << endl;
    } else {
        cout << "Vendas realizadas: " << vendas.size() << endl;
        float soma = 0;
    for (auto &venda : vendas){
        soma += venda.calcularVenda();
    }
    cout << "Total ganho: " << soma << "$" << endl;
    }
    
}
void salvarDados(vector<Produto> &estoque, vector<Venda> &vendas){
    //salvar estoque
    ofstream arquivoEstoque("estoque.txt");

    if (!arquivoEstoque.is_open()){
        cout << "Erro ao abrir o arquivo para salvar!\n";
        return;
    }

    for (const auto &produto : estoque){
        arquivoEstoque << produto.getNome() << "," << produto.getQtd() << "," << produto.getValor() << "\n";
    }

    arquivoEstoque.close();
    cout << "Dados do estoque salvos com sucesso!" << endl;
    
    //salvar vendas
    ofstream arquivoVendas("vendas.txt");
    if (!arquivoVendas.is_open()){
        cout << "Erro ao abrir o arquivo para salvar!\n";
        return;
    }
    
    for (const auto &venda : vendas){
        arquivoVendas << venda.getNome() << "," << venda.getQtdVendida() << "," << venda.getValor() << "\n";
    }
    arquivoVendas.close();
    cout << "Dados de vendas salvos com sucesso!" << endl;
}
void carregarDados(vector<Produto> &estoque, vector<Venda> &vendas){
    // Carregar estoque
    ifstream arquivoEstoque("estoque.txt");

    if (!arquivoEstoque.is_open()){
        cout << "Nenhum dado de estoque encontrado. Iniciando lista vazia.\n";
    } else {
        string linha;
        while (getline(arquivoEstoque, linha)) {
            size_t pos1 = linha.find(",");
            size_t pos2 = linha.find(",", pos1 + 1);

            if (pos1 != string::npos && pos2 != string::npos) {
                string nome = linha.substr(0, pos1);
                int quantidade = stoi(linha.substr(pos1 + 1, pos2 - pos1 - 1));
                float valor = stof(linha.substr(pos2 + 1));

                estoque.push_back(Produto(nome, valor, quantidade));
            }
        }
        arquivoEstoque.close();
        cout << "Dados do estoque carregados com sucesso!\n";
    }
    
    // Carregar vendas
    ifstream arquivoVendas("vendas.txt");
    
    if (!arquivoVendas.is_open()){
        cout << "Nenhum dado de vendas encontrado. Iniciando lista vazia.\n";
    } else {
        string linha;
        while (getline(arquivoVendas, linha)) {
            size_t pos1 = linha.find(",");
            size_t pos2 = linha.find(",", pos1 + 1);

            if (pos1 != string::npos && pos2 != string::npos) {
                string nome = linha.substr(0, pos1);
                int qtdVendida = stoi(linha.substr(pos1 + 1, pos2 - pos1 - 1));
                float valor = stof(linha.substr(pos2 + 1));

                vendas.push_back(Venda(nome, valor, qtdVendida));
            }
        }
        arquivoVendas.close();
        cout << "Dados de vendas carregados com sucesso!\n";
    }
}

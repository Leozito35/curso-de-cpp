#include <iostream>
#include <string>

using namespace std;

int main(){
    string dia, nomeProduto, opcaoProduto; float precoProduto;
    
    cout << "--- SUPERMERCADO OTIMISTA ---" << endl;
    cout << "Digite qual dia da semana: ";
    cin >> dia;
    cout << "Digite o nome do produto: ";
    cin >> nomeProduto;
    cout << "Digite o preco do produto: ";
    cin >> precoProduto;
    cout << "Digite a opcao do produto (ouro/prata): ";
    cin >> opcaoProduto;
    cout << "-----------------------------" << endl;
    
    while(dia != "segunda" && dia != "terca" && dia != "quarta" && dia != "quinta" && dia != "sexta" && dia != "sabado"){
        cout << "Dia da semana errado, verifique se todas as letras estao minusculas ou se estao erradas." << endl;
        cout << "Digite qual dia da semana: ";
        cin >> dia;
    }
    while (opcaoProduto != "ouro" && opcaoProduto != "prata"){
        cout << "Opcao errada, verifique se digitou corretamente e com as letras minusculas." << endl;
        cout << "Digite a opcao do produto (ouro/prata): ";
        cin >> opcaoProduto;
    }
    
    
    if ((dia == "segunda" || dia == "terca" || dia == "quarta") && opcaoProduto == "ouro"){
        precoProduto = precoProduto / 2;
    }
    else if ((dia == "quinta" || dia == "sexta") && (precoProduto >= 10 && precoProduto <= 100)){
        precoProduto = precoProduto / 3;
    }
    else{
        precoProduto = precoProduto * 2;
    }

    cout << "\nO preco do produto " << nomeProduto << " no dia de " << dia << " é "<< precoProduto << endl;

    
    return 0;
}
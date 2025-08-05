#include <iostream>
#include <string>

using namespace std;

int main(){
    int anoAtual, anoNascimento, idade;

    cout << "Ano atual: ";
    cin >> anoAtual;
    cout << "Ano de nascimento: ";
    cin >> anoNascimento;

    idade = anoAtual - anoNascimento;

    if (idade >= 18 && idade < 100){
        cout << "Em " << anoAtual << ", voce tera " << idade <<" anos e podera tirar a habilitacao";
    }
    else if (idade < 18 && idade > 0){
        cout << "Em " << anoAtual << ", voce tera " << idade <<" anos e nao podera tirar a habilitacao";
    }
    else {
        cout << "Idade invalida.";
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome; int idade; float peso; char genero;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "Peso (Em Kg): ";
    cin >> peso;

    cout << "Genero (M/F): ";
    cin >> genero;

    cout << "\n---Cadastro realizado com sucesso---\n";
    cout << "Nome: " << nome << endl;
    cout << "idade: " << idade << endl;
    cout << "peso: " << peso << endl;
    cout << "genero: " << genero<< endl;

    return 0;
}
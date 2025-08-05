#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome; float altura, peso, imc;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "altura: ";
    cin >> altura;

    cout << "peso: ";
    cin >> peso;

    imc = peso / (altura * altura);

    string resultado = (imc > 18.5 && imc <= 24.9) ? "Peso normal" : "Peso fora da faixa";



    cout << nome << ", seu IMC eh: " << imc << " - " << resultado;
    return 0;
}
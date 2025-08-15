#include <iostream>

using namespace std;

float converterMoeda (float real, float cotacao){
    return real / cotacao;
}

int main(){
    float real, cotacao;

    cout << "Digite o valor em reais: ";
    cin >> real;
    cout << "Digite a cotacao do dolar: ";
    cin >> cotacao;

    float dolar = converterMoeda(real, cotacao);
    cout << "O valor de " << real << " para dolar e " << dolar << endl;

    return 0;
}
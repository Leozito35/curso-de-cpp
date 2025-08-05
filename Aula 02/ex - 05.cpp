#include <iostream>

using namespace std;

int main(){
    float valorProduto;

    cout << "Valor do produto: ";
    cin >> valorProduto;

    cout << "\nA vista: " << valorProduto << endl;
    cout << "Com desconto (5%): " << valorProduto * 0.95 << endl;
    cout << "Parcelado (5x): " << (valorProduto * 1.1) / 5 << endl;
    cout << "Comissao a vista: " << 0.06 * valorProduto << endl;
    cout << "Comissao com desconto: " << 0.06 * (valorProduto * 0.95) << endl;
    cout << "Comissao Parcelado: " << 0.06 * (valorProduto * 1.1) << endl;

    return 0;
}
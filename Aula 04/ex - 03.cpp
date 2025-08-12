#include <iostream>

using namespace std;

int main(){
    int qtd = 0;
    for (int i = 0; i <= 5; i++){
        float precoDesconto, preco;
        cout << "Preco sem desconto: ";
        cin >> preco;
        cout << "Preco com desconto: " ;   
        cin >> precoDesconto;     

        if (precoDesconto <= (preco * 0.8)){
            qtd++;
        }

        cout << "\n";
    }

    cout << "No total, " << qtd << " produtos tiveram um desconto de pelo menos 20%.";
    return 0;
}
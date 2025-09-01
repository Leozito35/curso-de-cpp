#include <iostream>

using namespace std;

int somaAlg(int n, int soma){
    if (n == 0){
        return soma;
    }
    soma += n % 10;
    return somaAlg(n / 10, soma);

}
int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    int soma = somaAlg(n, 0);
    cout << "Soma dos digitos: " << soma;
    
    return 0;
}
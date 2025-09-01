#include <iostream>

using namespace std;

int contar(int n, int contador){
    if (n == 0 && contador != 0){
        return contador;
    }
    n = n / 10; contador++;
    return contar(n, contador);
}

int main(){
    int n;
    cout << "Digite um numero N: ";
    cin >> n;
    cout << "Quantidade de digitos: " << contar(n, 0);
    return 0;
}
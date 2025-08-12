#include <iostream>

using namespace std;

int main(){
    int numero;
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "Os 10 primeiros multiplos de " << numero << ": ";

    for (int i = 1; i < 11; i++){
        cout << numero * i << " ";
    }

    return 0;
}
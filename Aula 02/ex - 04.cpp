#include <iostream>
#include <string>

using namespace std;

int main(){
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;
    
    string resultado = (numero % 2 == 0) ? "Par" : "Impar";

    cout << "O numero digitado eh: " << resultado;
    return 0;
}
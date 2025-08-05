#include <iostream>
#include <string>

using namespace std;

int main(){
    int numero1, numero2;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2){
        cout << "O primeiro numero digitado eh maior";
    }
    else {
        cout << "O segundo numero digitado eh maior";
    }

    return 0;
}
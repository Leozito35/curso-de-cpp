#include <iostream>

using namespace std;

void crescente(int numero, int contador){
    if (contador > numero){
        return;
    }
    if (contador % 2 == 0){
        cout << contador << endl;
    }
    crescente(numero, contador + 1);

}
void decrescente(int numero){
    if (numero < 0){
        return;
    }

    if (numero % 2 == 0){
        cout << numero << endl;
    }
    decrescente(numero - 1);

}

int main(){
    int numero, ord;

    cout << "Digite o numero: ";
    cin >> numero;
    cout << "Digite a ordenacao (1 - Cres / 2 - Decres): ";
    cin >> ord;

    if (ord == 1) {
        crescente(numero, 0);
    }
    else if (ord == 2){
        decrescente(numero);
    }
    

    return 0;
}
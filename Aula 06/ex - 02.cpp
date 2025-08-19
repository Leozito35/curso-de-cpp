#include <iostream>

using namespace std;

int main(){
    int numeros[11], contador = 0;

    for (int i = 0; i < 11; i++){
        cin >> numeros[i];
    }
    for (int i = 0; i < 11; i++){
        if (numeros[i] == numeros[10]){
            contador++;
        }
    }

    cout << "O numero " << numeros[10] << " apareceu " << contador << "vezes, nas posicoes: " << endl;
    for (int i = 0; i < 11; i++){
        if (numeros[i] == numeros[10]){
            cout << i << endl;
        }
    }
    return 0;
}
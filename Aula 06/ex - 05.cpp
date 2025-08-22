#include <iostream>

using namespace std;

void bubbleSort(int numeros[], int tamanho, int ord){
    if (ord <= 0){
        cout << "ERRO! Ordenacao cancelada";
    }
    else if (ord % 2 != 0){
        for (int i = 0; i < tamanho; i++){
            for (int j = 0; j < tamanho - 1; j++){
                if (numeros[j] > numeros[j + 1]){
                    int temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }
    }
    else{
        for (int i = 0; i < tamanho; i++){
            for (int j = 0; j < tamanho - 1; j++){
                if (numeros[j] < numeros[j + 1]){
                    int temp = numeros[j];
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = temp;
                }
            }
        }
    }
}
int main(){
    int numeros[10], ord;

    cout << "Digite o estilo de ordenacao (par = decres/impar = cres): ";
    cin >> ord;


    for(int i = 0; i < 5; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

    bubbleSort(numeros, 5, ord);

    for (int i = 0; i < 5; i++){
        cout << numeros[i] << " ";
    }
    return 0;
}
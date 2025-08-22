#include <iostream>

using namespace std;

void bubbleSort(int numeros[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho - 1; j++){
            if (numeros[j] > numeros[j + 1]){
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
        for (int i = 0; i < tamanho; i++){
            cout << numeros[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int numeros[10];

    for(int i = 0; i < 10; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }

    bubbleSort(numeros, 10);

    return 0;
}
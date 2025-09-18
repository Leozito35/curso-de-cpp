#include <iostream>

using namespace std;

int main(){
    int matriz[100][100], linha, coluna;
    int positivos = 0, negativos = 0, diagonal1 = 0, diagonal2 = 0;
    cout << "Informe as dimensoes da matriz: " << endl;
    
    cout << "Linhas: ";
    cin >> linha;
    cout << "colunas: ";
    cin >> coluna;

    cout << "Informe os numeros: " << endl;
    for (int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz formada: " << endl;
    for (int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if (matriz[i][j] > 0){
                positivos++;
            }
            else if(matriz[i][j] < 0){
                negativos++;
            }
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    if (linha == coluna){
        for (int i = 0; i < linha; i++){
            diagonal1 += matriz[i][i];
            diagonal2 += matriz[i][coluna - 1 - i];
        }
    }
    cout << "A diagonal principal e secundaria tem valor(es) " << diagonal1 << " e " << diagonal2 << " respectivamente.\n";
    cout << "A matriz possui " << negativos << " numero(s) menor(es) que zero.\n";
    cout << "A matriz possui " << positivos << " numero(s) maior(es) que zero.\n";

    return 0;
}
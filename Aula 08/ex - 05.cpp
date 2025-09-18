#include <iostream>

using namespace std;

int main(){
    int matriz[3][3], contador = 0, somaPositiva = 0, menor = 99999, somaSemD = 0;
    cout << "Informe os numeros: " << endl;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j] > 0){
                somaPositiva += matriz[i][j]; 
                contador++;
            } 
            if (menor > matriz[i][j]) menor = matriz[i][j];
            if (i != j) somaSemD += matriz[i][j];
        }
    }
    int delta;

    if (menor % 2 == 0) delta = 1;
    else delta = 0;

    cout << "\nMatriz formada:" << endl;
    cout << "Media dos numeros positivos: " << somaPositiva / contador << endl;
    cout << "Menor numero: " << menor << endl;
    cout << "Valor do delta: " << delta << endl;
    cout << "Soma sem diagonal principal: " << somaSemD << endl;

    return 0;
}

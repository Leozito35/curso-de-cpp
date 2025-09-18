#include <iostream>

using namespace std;

int main(){
    int pontuacoes[3][3], somaLinha = 0, somaColuna = 0;

    for(int i = 0; i < 3; i++){
        cout << "Time " << i + 1 << " (3 rodadas):\n";
        for(int j = 0; j < 3; j++){
            cin >> pontuacoes[i][j];
        }
    }
    cout << "Pontuacao por time: " << endl;

    for (int i = 0; i < 3; i++){
        cout << "Time " << i + 1 << ": ";
        for(int j = 0; j < 3; j++){
            somaLinha = somaLinha + pontuacoes[i][j];
        }
        cout << somaLinha << endl;
        somaLinha = 0;
    }
    cout << "Pontuacao por rodada: " << endl;

    for (int i = 0; i < 3; i++){
        cout << "Time " << i + 1 << ": ";
        for(int j = 0; j < 3; j++){
            somaColuna = somaColuna + pontuacoes[j][i];
        }
        cout << somaColuna << endl;
        somaColuna = 0;
    }
    return 0;
}
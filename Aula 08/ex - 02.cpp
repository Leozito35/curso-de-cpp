#include <iostream>
using namespace std;

void verifica(string &gab) {
    while (gab.length() != 5) {
        cout << "Quantidade errada de alternativas! Digite de novo" << endl;
        cout << "Digite o gabarito: ";
        cin >> gab;
    }

    for (int i = 0; i < gab.length(); i++) {
        while (gab[i] != 'a' && gab[i] != 'b' && gab[i] != 'c' && gab[i] != 'd') {
            cout << "Alternativa invalida encontrada: " << gab[i] << endl;
            cout << "Digite a alternativa: ";
            cin >> gab[i];
        }
    }
}

int main() {
    string gabOfc, gab;
    int num;

    cout << "Informe o gabarito: ";
    cin >> gabOfc;
    verifica(gabOfc);

    while (true) {
        cout << "Dados do Aluno: " << endl;
        cout << "Numero: ";
        cin >> num;

        if (num == 9999) {
            break;
        }
        if (num < 0) {
            cout << "Numero de aluno invalido!" << endl;
            continue;
        }

        cout << "Resposta: ";
        cin >> gab;
        verifica(gab);

        int acertos = 0;
        for (int i = 0; i < 5; i++) {
            if (gab[i] == gabOfc[i]) {
                acertos++;
            }
        }
        cout << "O aluno numero " << num << " acertou " << acertos << " de 5\n";
    }
    return 0;
}

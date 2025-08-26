#include <iostream>
#include <string>

using namespace std;

int main(){
    string frase;
    int qtda = 0, qtde = 0, qtdi = 0, qtdo = 0 , qtdu = 0;

    cout << "Digite uma frase: ";
    cin >> frase;
    
    for (int i = 0; i < frase.length(); i++){
        if (frase.at(i) == 'a' || frase.at(i) == 'A'){
            qtda++;
        }
        else if (frase.at(i) == 'e' || frase.at(i) == 'E'){
            qtde++;
        }
        else if (frase.at(i) == 'i' || frase.at(i) == 'I'){
            qtdi++;
        }
        else if (frase.at(i) == 'o' || frase.at(i) == 'O'){
            qtdo++;
        }
        else if (frase.at(i) == 'u' || frase.at(i) == 'U'){
            qtdu++;
        }
    }
    cout << qtda + qtde + qtdi + qtdo + qtdu << endl;
    cout << frase.length() << endl;
    float porcentagem = ((qtda + qtde + qtdi + qtdo + qtdu) / (float) frase.length()) * 100;

    cout << "Quantidade de aparicoes" << endl;;
    cout << "Letra 'a': " << qtda << endl;
    cout << "Letra 'e': " << qtde << endl;
    cout << "letra 'i': " << qtdi << endl;
    cout << "letra 'o': " << qtdo << endl;
    cout << "letra 'u': " << qtdu << endl;
    cout << "Quantidade de vogais em porcentagem: " << porcentagem << endl;
    return 0;
}
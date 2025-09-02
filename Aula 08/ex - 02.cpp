#include <iostream>

using namespace std;

int main(){
    string gabOfc; int numero, nota[100];
    
    cout << "Informe o gabarito: ";
    cin >> gabOfc;

    if (gabOfc.length() > 5){
        cout << "Gabarito invalido!" << endl;
        return 1;
    }

    for(int i = 0; i < 5; i++){
        char alt = gabOfc[i];

        if(alt != 'a' || alt != 'b' || alt != 'c' || alt != 'd'){
            cout << "Gabarito invalido!" << endl;
            return 1;
        }
    }
    
    while(numero != 9999){
        string resposta;

        cout << "\nDados do aluno: " << endl;
        cout << "Numero: ";
        cin >> numero;
        cout << "Resposta: ";
        cin >> resposta;

        for (int i = 0; i < 5; i++){
            if(gabOfc[i] == resposta[i]){
               
            }
        }
    }
    
}
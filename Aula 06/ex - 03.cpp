#include <iostream>

using namespace std;

int main(){
    int numeros[10];

    cout << "Informe uma sequencia de 10 numeros: " << endl;
    for (int i = 0; i < 10; i++){
        cin >> numeros[i];
    }
    cout << "\nNumeros na ordem inversa: " << endl;
    for (int i = 9; i >= 0; i--){
        cout << numeros[i] << endl;
    }


    return 0;
}
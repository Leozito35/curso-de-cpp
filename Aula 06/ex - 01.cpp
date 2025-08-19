#include <iostream>

using namespace std;

int main(){
    int numeros[10];

    cout << "Numeros: " << endl;

    for (int i = 0; i < 10; i++){
        cin >> numeros[i];
    }

    int inicio, fim, contador = 0;
    cout << "Intervalo" << endl;
    cout << "Inicio: ";
    cin >> inicio;
    cout << "Fim: ";
    cin >> fim;

    if (inicio > fim){
        cout << "erro" << endl;
        return -1;
    }

    cout << "Os numeros que estao no intervalo [" << inicio << ";" << fim <<"] sao: " << endl;

    for (int i = 0; i < 10; i++){
        if (numeros[i] > inicio && numeros[i] < fim){
            cout << "- " << numeros[i] << endl;
            contador++;
        }   
    }
    cout << "No total, " << contador << " de 10 numeros."; 
    
    return 0;
}
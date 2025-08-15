#include <iostream>

using namespace std;

void classificaAluno(float media, int falta);

int main(){
    float media; int falta;

    cout << "Informe sua media: ";
    cin >> media;
    cout << "Informe a quantidade de faltas: ";
    cin >> falta;

    classificaAluno(media, falta);

    return 0;
}

void classificaAluno(float media, int falta){
    if (media >= 9.5 && falta < 10){
        cout << "Aprovado com louvor";
    }
    else if (media >= 7 && falta < 10){
        cout << "Aprovado";
    }
    else if (media < 7 && falta < 10){
        cout << "Reprovado por nota";
    }
    else if (media < 7 && falta >= 10){
        cout << "Reprovado por falta e por nota";
    }
    else if (falta >= 10){
        cout << "Reprovado por falta";
    }
    else{
        cout << "Erro!";
    }
}

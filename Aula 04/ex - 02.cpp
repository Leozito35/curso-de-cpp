#include <iostream>

using namespace std;

int main(){
    int matricula = 100, menorMatricula = 1000, contador = 0; 
    float cre, menorCre = 11, mediaCre = 0;

    cout << "--- PROJETO DE EXTENSAO ---\n";

    while (contador != 5){
        cout << "Informe a matricula: ";
        cin >> matricula;
        cout << "Informe o CRE: ";
        cin >> cre;
        
        if (matricula == 0 && cre == 0){
            break;
        }

        if (cre < menorCre){
            menorCre = cre;
            menorMatricula = matricula;
        }
        mediaCre += cre;
        contador++;

    }

    cout << "Matricula do aluno com menor CRE: " << menorMatricula << endl;
    cout << "CRE medio de todos os candidatos: " << mediaCre / (float)contador;

    return 0;
}
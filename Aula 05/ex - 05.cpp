#include <iostream>

using namespace std;

float calculaSalario(float salario, int pecas);

int main(){
    float peca1, peca2, peca3; int salarioGeral;

    cout << "Digite o valor do salario: ";
    cin >> salarioGeral;
    cout << "Pecas fabricadas pela primeira pessoa: ";
    cin >> peca1;
    cout << "Pecas fabricadas pela segunda pessoa: ";
    cin >> peca2;
    cout << "Pecas fabricadas pela terceira pessoa: ";
    cin >> peca3;

    float salario1 = calculaSalario (salarioGeral, peca1);
    float salario2 = calculaSalario (salarioGeral, peca2);
    float salario3 = calculaSalario (salarioGeral, peca3);

    int total = peca1 + peca2 + peca3;
    float media = (float)total / 3;
    float maiorSalario = salarioGeral;

    if (salario1 > maiorSalario){
        maiorSalario = salario1;
    }
    if (salario2 > maiorSalario){
        maiorSalario = salario2;
    }
    if (salario3 > maiorSalario){
        maiorSalario = salario3;
    }

    cout << "\nSalario da primeria pessoa: " << salario1 << endl;
    cout << "Salario da segunda pessoa: " << salario2 << endl;
    cout << "Salario da terceira pessoa: " << salario3 << endl;
    cout << "Total de pecas fabricadas: " << total << endl;
    cout << "Media de pecas fabricadas: " << media << endl;
    cout << "Maior salario: " << maiorSalario;

    return 0;
}

float calculaSalario(float salario, int pecas){
    if (pecas <= 30){
        return salario;
    }
    else if (pecas > 30 && pecas < 42){
        return salario + (salario * 0.03 * pecas);
    }
    else if (pecas > 41){
        return salario + (salario * 0.05 * pecas);
    }
    return -1;
}
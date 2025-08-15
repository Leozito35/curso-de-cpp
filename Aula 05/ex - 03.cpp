#include <iostream>
#include <cstring>

using namespace std;

float calculaHospedagem (string tipoAP, int qtdDia);
float desconto (string tipoAP, int qtdDia);

int main(){
    string tipoAP; int qtdDia;

    cout << "== TIPO DE APARTAMENTO == VALOR POR DIA ==\n";
    cout << "Individual                125 Reais\n";
    cout << "Suite dupla               140 Reais\n";
    cout << "Suite tripla              180 Reais\n";
    cout << "==========================================\n\n";

    cout << "Informe o tipo de apartamento: ";
    cin >> tipoAP;
    cout << "Informe a quantidade de dias: ";
    cin >> qtdDia;

    if (qtdDia >= 3){
        cout << "O valor total da reserva foi: " << desconto(tipoAP, qtdDia);
    }
    else if (qtdDia <= 0){
        cout << "Reserva inválida!";
    }
    else{
        cout << "O valor total da reserva foi: " << calculaHospedagem(tipoAP, qtdDia);         
    }
    return 0;
}

float calculaHospedagem (string tipoAP, int qtdDia){

    if (tipoAP == "Individual"){
        return 125 * qtdDia;
    }
    else if (tipoAP == "Suite dupla"){
        return 140 * qtdDia;
    }
    else if (tipoAP == "Suite tripla"){
        return 180 * qtdDia;
    }
    else{
        cout << "Tipo de apartamento inválido! Reserva cancelada.\n";
    }
}

float desconto(string tipoAP, int qtdDia){
    return 0.85 * calculaHospedagem(tipoAP, qtdDia);
}

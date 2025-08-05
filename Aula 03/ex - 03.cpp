#include <iostream>

using namespace std;

int main(){
    int NumeroCanal;

    cout << "Digite um numero de um canal de TV: ";
    cin >> NumeroCanal;

    switch (NumeroCanal){
        case 5:
            cout << "Emissora do canal: TV Ponta Verde";
            break;
        case 7:
            cout << "Emissora do canal: TV Gazeta";
            break;
        case 11:
            cout << "Emissora do canal: TV Pajuçara";
            break;
        case 16:
            cout << "Emissora do canal: TV Farol";
            break;
        default:
            cout << "Canal invalido";
    }
    return 0;
}
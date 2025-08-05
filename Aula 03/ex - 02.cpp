#include <iostream>
#include <string>

using namespace std;

int main(){
    int idade; string categoria;

    cout << "Digite a idade do nadador: ";
    cin >> idade;

    if (idade < 0 || idade > 100){
        cout << "Idade Invalida";
    }
    else if (idade >= 5 && idade <= 7){
        cout << "Nadador se engrada na categoria: Infantil A";
    }
    else if (idade >= 8 && idade <= 10){
        cout << "Nadador se engrada na categoria: Infantil B";
    }
    else if (idade >= 11 && idade <= 13){
        cout << "Nadador se engrada na categoria: Juvenil A";
    }
    else if (idade >= 14 && idade <= 17){
        cout << "Nadador se engrada na categoria: Juvenil B";
    }
    else if (idade >= 18 && idade <= 40){
        cout << "Nadador se engrada na categoria: Adulto";
    }
    else {
        cout << "Nadador se engrada na categoria: Master";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){
    float altura; int idade, brinquedo1 = 0, brinquedo2 = 0, brinquedo3 = 0;

    cout << "Digite sua altura: ";
    cin >> altura;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (altura >= 1.5 && idade >= 12){
        brinquedo1 = 1;
    }
    if (altura >= 1.4 && idade >= 14){
        brinquedo2 = 1;
    }
    if (altura >= 1.7 && idade >= 16){
        brinquedo3 = 1;
    }
    
    if (brinquedo1 == 0 && brinquedo2 ==  0 && brinquedo3 == 0){
        cout << "Voce nao pode entrar em nenhum brinquedo!";
    }
    else if(brinquedo1 == 1 && brinquedo2 ==  1 && brinquedo3 == 1){
        cout << "Voce pode entrar nos brinquedos: " << endl;
        cout << "- Barca Viking" << endl;
        cout << "- Elevator of death" << endl;
        cout << "- Final killer" << endl;

        cout << "\n Voce pode entrar em 3 brinquedos!";
    }
    else if (brinquedo1 == 1 && brinquedo2 == 1 && brinquedo3 == 0){
        cout << "Voce pode entrar nos brinquedos: " << endl;
        cout << "- Barca Viking" << endl;
        cout << "- Elevator of death" << endl;
        
        cout << "\n Voce pode entrar em 2 brinquedos!";
    }
        else if (brinquedo1 == 1 && brinquedo2 == 0 && brinquedo3 == 1){
        cout << "Voce pode entrar nos brinquedos: " << endl;
        cout << "- Barca Viking" << endl;
        cout << "- Final killer" << endl;
        
        cout << "\n Voce pode entrar em 2 brinquedos!";
    }
        else if (brinquedo1 == 0 && brinquedo2 == 1 && brinquedo3 == 1){
        cout << "Voce pode entrar nos brinquedos: " << endl;
        cout << "- Elevator of death" << endl;
        cout << "- Final killer" << endl;
        
        cout << "\n Voce pode entrar em 2 brinquedos!";
    }
    return 0;
}
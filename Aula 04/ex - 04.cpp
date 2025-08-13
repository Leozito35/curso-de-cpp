#include <iostream>

using namespace std;

int main() {
    int contador = 1, apr = 0;
    cout << "--- CONCURSO IBGE ---" << endl;
    
    while(1){
        int port, mat; float red;
        
        cout << "Candidato " << contador << endl;
        cout << "Portugues: ";
        cin >> port;
        if (port < 0){
            break;
        }
        cout << "Matematica: ";
        cin >> mat;
        cout << "Redacao: ";
        cin >> red;
        
        if (mat >= 0.6 * 35 && port >= 0.8 * 50 && red >= 7){
            apr++;
        }
        contador++;
    }
     cout << "\nQuantidade de aprovados: " << apr << " / " << contador << endl;
    
    
    
    return 0;

}

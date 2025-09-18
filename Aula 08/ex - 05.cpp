#include <iostream>

using namespace std;

int main(){
    int matriz[3][3];
    cout << "Informe os numeros: " << endl;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    return 0;
}
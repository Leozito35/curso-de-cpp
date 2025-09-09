#include <iostream>

using namespace std;

void troca(int *a, int *b){
    int troca = *a;
    *a = *b;
    *b = troca;
}
int main(){
    int a, b;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Antes da troca: a = " << a << ", b = " << b << endl;
    troca(&a, &b);
    cout << "Depois da troca: a = " << a << ", b = " << b << endl;

}
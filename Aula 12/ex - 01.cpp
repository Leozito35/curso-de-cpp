#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Digite um valor para x: ";
    cin >> x;

    int *p = &x;
    cout << "\nValor original de x: " << x << endl;
    cout << "Valor de x acessado pelo ponteiro: " << *p << endl << endl;

    cout << "Digite um novo valor para X atraves do ponteiro: ";
    cin >> *p;

    cout << "Novo valor de X apos alteracao pelo ponteiro: " << x;

    return 0;
}
#include <iostream>

using namespace std;

void converter(int n){
    int resto;
    if (n == 0){
        resto = 1;
        return;
    }
    resto = n % 2;
    converter(n/2);
    cout << resto;
}
int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;

   converter(n);
 

    return 0;
}
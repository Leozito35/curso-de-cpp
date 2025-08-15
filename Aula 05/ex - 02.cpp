#include <iostream>
#include <math.h>

using namespace std;

float volumeEsfera (float raio);

int main(){

    float raio1, raio2, raio3;

    cout << "Digite o valor do primeiro raio: ";
    cin >> raio1;
    
    cout << "Digite o valor do primeiro raio: ";
    cin >> raio2;
    
    cout << "Digite o valor do primeiro raio: ";
    cin >> raio3;

    float volume1 = volumeEsfera(raio1);
    float volume2 = volumeEsfera(raio2);
    float volume3 = volumeEsfera(raio3);

    cout << "Volume da primeira esfera: " << volume1 << endl;
    cout << "Volume da segunda esfera: " << volume2 << endl;
    cout << "Volume da terceira esfera: " << volume3 << endl;

    return 0;
}

float volumeEsfera (float raio){
    return (4 * 3.1416 * pow(raio, 3)) / 3;
}
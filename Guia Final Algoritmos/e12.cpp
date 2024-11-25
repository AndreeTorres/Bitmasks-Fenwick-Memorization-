#include <iostream>
using namespace std;

// Multiplicar S por 2^N usando un desplazamiento a la izquierda

int main(){
    int S=10;
    int n=0;
    cout <<"Ingrese el numero de desplazamientos a la izquierda: \n";
    cin >> n;
    S = S << n;
    cout << S << "\n";
}
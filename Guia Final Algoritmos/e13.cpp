#include <iostream>
using namespace std;

// Dividir S por 2^N usando un desplazamiento a la derecha


int main(){
    int S=10;
    int n=0;
    cout<<"Ingrese el numero por el que desea dividir: \n";
    cin >>n;
    S = S>>n;
    cout << S << "\n";
}
#include <iostream>
using namespace std;

// Verificar si dos enteros tienen signos opuestos.

void verificarSig(int S1, int S2){
    cout << "S1: " << S1 << "\n";
    cout << "S2: " << S2 << "\n";
    cout << "S1^S2: " << (S1^S2) << "\n";
    if((S1^S2)<0){
        cout << "Tienen signos opuestos\n";
    }else {
        cout<<"No tienen signos opuestos\n";
    }
}


int main(){
    int S1= 10;
    int S2= -10;
    verificarSig(S1,S2);
}

// Solucion: para poder verificar si tienen se les hace XOR ya si es negativo seria 1...
// Mientras que si es positivo seria 0..., por lo tanto si se le aplica XOR
// siempre va a dar 1... y este seria negativo, por lo que seria menor que 0
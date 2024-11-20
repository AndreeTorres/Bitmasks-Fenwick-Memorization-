#include <iostream>
using namespace std;

//Calcular el XOR de todos los números desde 1 hasta N de manera eficiente.

int contarBits(int S){
    int contador=0;
    while(S>0){
        S>>=1;
        contador++;
    }
    return contador;
}

int main(){
    int S=10;//1010
    int totalB= contarBits(S);
    for(int i=0; i<totalB;i++){
        int x= S^=(1<<i);
        cout<<"XOR de la posición "<<i<<" es: "<<x<<"\n";
    }
}

// Solución: encontramos la cantidad de bits porque es la cantidad a iterar, la condicón del FOR será que sea menor que la
// cantidad de bits ya que este comienza desde 0, luego guardamos el valor aplicando XOR en esa posicion
// Imprimimos el XOR de esa posición
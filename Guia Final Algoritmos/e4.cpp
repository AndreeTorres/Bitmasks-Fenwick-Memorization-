#include <iostream>
using namespace std;

// Encontrar el bit menos significativo (LSB) activado en S

int log2(int n)
{
    int result = 0;
    while ( n>>=1) // La funcion inversa a exponencial es division, por lo que se desplaza a la derecha para dividir entre 2
    {
        result++; // Se va sumando 1 para ver cuantas divisiones realizó
    }
    return result;
}


int main(){
    int S = 10; // 1000
    int lsb = S&(-S); // R=2
    cout<<lsb<<"\n";
    int posicion= log2(lsb); // R=1 ya que 2^1=2 y se devuelve 1
    cout << "El bit menos significativo activado en S es: " << posicion;
}

// Solución: Al aplicar logaritmo se encuentra cuantas veces se dividió entre 2 para encontrar el LSB
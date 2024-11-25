#include <iostream>
using namespace std;

int contarBits(int S) {
    int contador = 0;
    while (S > 0) {
        S = S>>1;
        contador++;
    }
    return contador;
}
// Encontrar el bit más significativo (MSB) activado en S .

int main(){
    int S = 10; //1010 ; bit más significativo es 3    
    int msb=contarBits(S);
    cout<<"El bit más signficaivo activado en S es: "<<msb<<"\n";
}

//Solución: El bit más significativo será aquel que este al principio porque la maquina omite los 0 a la izq
// Por lo tanto el primer bit siempre será 0
// Ejemplo: 1010, nunca podrá ser 01010 porque la maquina omite los 0 a la izq, por lo tanto la cantidad de bits que tenga será el MSB
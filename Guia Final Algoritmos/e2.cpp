#include <iostream>
using namespace std;

// Calcular el número de 1s (bits activados) en la representación binaria de S

void numBits(int S)
{
    int cont = 0;
    
    while (S > 0) {
        if (S & 1) {
            cont++; // Al desechar el ultimo bit de la derecha si es falso cambiará su ultimo bit, porque se ejecuta la parte de abajo de S=S>>1
        }           // En cualquier caso deseche algunos 0 y encuentre un 1 se le sumará al contador 
                    // Ejemplo: 18 = 10010 al hacer & da 0 entonces se desplaza otro, 18 >> 1 = 1001 al hacer la concatenacion da 1 entonces es verdadero, cont=1
                    // Asi hasta que S sea 0    
        S = S >> 1; // Imaginar que va desechando los bits de la derecha. y volver a analizar el if
    }
    
    cout << "El número de bits activados en la representación binaria de S es: " << cont << endl;
}

int main()
{
    int S = 18;
    numBits(S); 
}

// Solución: Se desplaza a la derecha para ir "desechando" los bits y aumentando el contador hasta que no existan bit y salga del while
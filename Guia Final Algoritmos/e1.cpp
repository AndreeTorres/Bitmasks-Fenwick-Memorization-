#include <iostream>
using namespace std;

// Comprobar si S es par usando la lógica de potencia de dos.

void parS(int S)
{
    if ((S&(2-1))==0) // N=2 porque quiero el modulo de S%2, la formula normal seria (S&(N-1)) adonde N debe de ser potencia de 2
    {
        cout << "S es par";
    }
    else
    {
        cout << "S no es par";
    }
}

int main()
{   
    int S = 2;
    parS(S);
}

// Solución: Se calcula el modulo y si este es 0 entonces es par, de lo contrario no lo es
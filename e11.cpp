#include <iostream>
using namespace std;

// Extraer los últimos K bits de S

void extraer(int S, int k)
{
        for (int i = 0; i < k; i++)
        {
            if ((S & 1) == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
            S = S >> 1;
        }
}

int main()
{
    int S = 10, k, extraccion;
    cout<<S<<"\n";
    cout << "Ingrese la cantidad de bit que desea extraer: \n";
    cin >> k;
    extraer(S, k);
}
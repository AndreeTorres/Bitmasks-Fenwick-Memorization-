#include <iostream>
using namespace std;

// Fibonacci con memoization

int main()
{
    int n;
    cout << "Ingrese el número de la serie de Fibonacci que desea calcular: \n";
    cin >> n;
    int memo[n];
    memo[0]=1;
    memo[1]=1;
    if (n>2)
    {
        for(int i=2; i<n; i++)
        {
           memo[i]= i*memo[i-1];
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << memo[i] << ", ";
    }

}
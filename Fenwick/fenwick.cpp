#include <iostream>
using namespace std;

void update(int arr[], int valor, int index)
{

    for (int i = index; i < 17; i++)
    {
        for (int j = i; j < 17; j += j & (-j))
        {
            arr[j] += valor;
        }
    }
        for (int index = 1; index < 17; index++)
    {
        cout << arr[index] << ", ";
    }
}

int main()
{
    int S[17] = {0, 4, 4, 9, 7, 3, 3, 2, 3, 4, 5, 2, 1, 8, 1, 5, 3};
    int emptyarray[17] = {0};

    // Construcción del Fenwick Tree
    for (int i = 1; i < 17; i++)
    {
        for (int j = i; j < 17; j += j & (-j))
        {
            emptyarray[j] += S[i];
        }
    }

    // Imprimir el arreglo resultante
    for (int index = 1; index < 17; index++)
    {
        cout << emptyarray[index] << ", ";
    }
    cout << "\n";
    update(emptyarray, 2, 14); // Sin implementar
    return 0;
}
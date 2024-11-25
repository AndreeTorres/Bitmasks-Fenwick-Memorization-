#include <iostream>
using namespace std;

// Intercambiar dos variables sin usar una variable temporal usando XOR

int main() {
    int a = 8; // 1000
    int b = 10; // 1010

    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;

    // Intercambio usando XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;

    return 0;
}
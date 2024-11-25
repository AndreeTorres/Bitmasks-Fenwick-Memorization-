#include <iostream>
using namespace std;

int main() {
    int K;
    cout << "Ingrese el valor de K: ";
    cin >> K;

    // Máscara con solo los primeros K bits activados
    unsigned int maskFirstK = (1 << K) - 1;
    cout << "Máscara con los primeros " << K << " bits activados: " << bitset<32>(maskFirstK) << endl;

    // Máscara con solo los últimos K bits activados
    unsigned int maskLastK = ((1 << K) - 1) << (32 - K);
    cout << "Máscara con los últimos " << K << " bits activados: " << bitset<32>(maskLastK) << endl;

    return 0;
}


// Se le resta 1 porque los asi se retrocede 1 numero
// si a 1000 le restamos 1 nos da 0111 ya que se retrocede 1 vez
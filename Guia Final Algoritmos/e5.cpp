#include <iostream>
using namespace std;

//Apagar (desactivar) el LSB en S

int log2(int n){
    int contador=0;
    while(n>>=1){
        contador++; // Cada vez que se desplace se divide entre 2, entonces queremos saber cuantos 2 se necesitan para llegar a n
    }
    return contador;
}


int main(){
    int S=10; // 1010
    int respuesta= S&(S-1);
    cout << "Respuesta utilizando la funcion apagar el ultimo bit : "<< respuesta<<"\n";  
    int lsb= S&(-S);
    cout<<lsb<<"\n";
    int posicion = log2(lsb);
    S= S&~(1<<posicion);
    cout<<"El nuevo valor con bit apagado :"<<S;
}
// Solución: Al encontrar el LSB obtenemos la posicion que este regresa, luego simplemente apgamos la posicion que este tiene

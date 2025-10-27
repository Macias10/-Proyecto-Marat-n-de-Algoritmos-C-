// Título: Planificador de eventos


// Programa de ejemplo en C++
// Descripción: ejercicio número 421

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Dado un número, imprime su factorial (para n<=20)
    int n; if(!(cin>>n)) return 0;
    unsigned long long f=1;
    for(int i=2;i<=n;i++) f*=i;
    cout<<f<<"\n";
    return 0;
}
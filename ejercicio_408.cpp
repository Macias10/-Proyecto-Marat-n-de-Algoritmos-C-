// Título: Sistema de mensajería en red


// Programa de ejemplo en C++
// Descripción: ejercicio número 408

#include <bits/stdc++.h>
using namespace std;
int main() {
    // Lee N enteros y muestra su suma
    int n; if(!(cin>>n)) return 0;
    long long s=0; for(int i=0;i<n;i++){ long long x; cin>>x; s+=x; }
    cout<<s<<"\n";
    return 0;
}
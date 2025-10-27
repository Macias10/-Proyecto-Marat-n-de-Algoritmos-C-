// Título: Cifrado y descifrado de texto


// Programa de ejemplo en C++
// Descripción: ejercicio número 286

#include <bits/stdc++.h>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; double sum=0; for(int i=0;i<n;i++){ double x; cin>>x; sum+=x; } cout<<fixed<<setprecision(2)<<(sum/n)<<"\n"; }
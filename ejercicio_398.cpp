// Título: Monitor de red local


// Programa de ejemplo en C++
// Descripción: ejercicio número 398

#include <bits/stdc++.h>
using namespace std;
bool es_primo(int x){ if(x<2) return false; for(int i=2;i*i<=x;i++) if(x%i==0) return false; return true; }
int main(){ int x; if(!(cin>>x)) return 0; cout<<(es_primo(x)?"SI":"NO")<<"\n"; }
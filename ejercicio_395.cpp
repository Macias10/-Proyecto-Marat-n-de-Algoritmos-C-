// Título: Sistema de control de calidad


// Programa de ejemplo en C++
// Descripción: ejercicio número 395

#include <bits/stdc++.h>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; // invierte los bits de n hasta el bit 31
unsigned int x = (unsigned int)n, r=0; for(int i=0;i<32;i++) if(x&(1u<<i)) r |= 1u<<(31-i); cout<<r<<"\n"; }
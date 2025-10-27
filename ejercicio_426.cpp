// Título: Sistema de predicción climática


// Programa de ejemplo en C++
// Descripción: ejercicio número 426

#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){ return b==0?abs(a):gcd(b,a%b); }
int main(){ int a,b; if(!(cin>>a>>b)) return 0; cout<<gcd(a,b)<<"\n"; }
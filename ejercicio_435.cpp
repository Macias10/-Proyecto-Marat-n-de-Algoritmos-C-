// Título: Procesador de texto ligero


// Programa de ejemplo en C++
// Descripción: ejercicio número 435

#include <bits/stdc++.h>
using namespace std;
int main(){ string s; if(!(cin>>s)) return 0; string t=s; reverse(t.begin(), t.end()); cout<<(s==t?"PALINDROMO":"NO")<<"\n"; }
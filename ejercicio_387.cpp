// Título: Modelo de red social básica


// Programa de ejemplo en C++
// Descripción: ejercicio número 387

#include <bits/stdc++.h>
using namespace std;
int main(){ string s; if(!(cin>>s)) return 0; string t=s; reverse(t.begin(), t.end()); cout<<(s==t?"PALINDROMO":"NO")<<"\n"; }
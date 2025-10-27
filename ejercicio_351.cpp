// Título: Administrador de contraseñas


// Programa de ejemplo en C++
// Descripción: ejercicio número 351

#include <bits/stdc++.h>
using namespace std;
int main(){ string s; if(!(cin>>s)) return 0; string t=s; reverse(t.begin(), t.end()); cout<<(s==t?"PALINDROMO":"NO")<<"\n"; }
// Título: Gestor de flujo de trabajo


// Programa de ejemplo en C++
// Descripción: ejercicio número 392

#include <bits/stdc++.h>
using namespace std;
int main(){ string s; getline(cin,s); if(s.size()==0) getline(cin,s); // lee línea
int vowels=0; for(char c:s) if(strchr("aeiouAEIOU",c)) vowels++; cout<<vowels<<"\n"; }
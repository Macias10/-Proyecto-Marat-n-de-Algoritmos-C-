// Título: Analizador de rendimiento


// Programa de ejemplo en C++
// Descripción: ejercicio número 477

#include <bits/stdc++.h>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i]; int mx=a[0]; for(int x:a) mx=max(mx,x); cout<<mx<<"\n"; }
// Título: Simulación de economía


// Programa de ejemplo en C++
// Descripción: ejercicio número 424

#include <bits/stdc++.h>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i]; sort(a.begin(), a.end()); for(int x:a) cout<<x<<" "; cout<<"\n"; }
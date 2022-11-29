#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll countPrimes(ll n){
    ll contador = 0;
    vector <bool> Visited(n);  
    Visited[0] = Visited[1] = true;
    for (ll i = 2; i < n; ++i) 
        if (!Visited[i]) {
            contador++;                          
            for (ll j = i*i; j <= n; j += i)
                Visited[j] = true; 
        }
    return contador;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

ll SieveSize;
bitset <1000010> Eliminados;                             // 10^7 is the rough limit
vll Primos;                                      // compact list of primes

void Sieve(ll Upperbound) {                      // range = [0..upperbound]
  SieveSize = Upperbound + 1;                    // to include upperbound
  Eliminados.set();                                      // all 1s
  Eliminados[0] = Eliminados[1] = 0;                             // except index 0+1
  for (ll i = 2; i < SieveSize; ++i) 
        if (Eliminados[i]) {
            // cross out multiples of i starting from i*i
            for (ll j = i*i; j < SieveSize; j += i) 
                Eliminados[j] = 0;
            Primos.push_back(i);                              // add prime i to the list
        }
}

int main(){
    Sieve(1000010);
    vll SuperContador(1000010); 
    // No. numeros primos de un rango i-j
    int Tests; 
    int i,j, x,t,Contador;
    x = t = Contador = 0;
    scanf("%d", &Tests);
    
    while (x <= 1000010){
        if (x >= Primos[t]){
            Contador += 1;
            t += 1;
            SuperContador[x] = Contador;
        }
        else{
            SuperContador[x] = Contador;
        }
        x++; 
    }
   
    while(Tests--){
        scanf("%d %d", &i, &j);
        printf("%lld\n",SuperContador[j]-SuperContador[i-1]);
    }
    
    return 0;
}

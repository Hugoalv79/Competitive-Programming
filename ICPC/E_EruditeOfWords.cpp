#include <bits/stdc++.h>
 
typedef  long long int ll;
 
using namespace std;
 
ll const c = 1000000007;
 
ll result[1000100] = {};
 
ll mod(ll a, ll m) {return ((a%m)+m)%m; }
 
ll ModPow(ll b, ll p,ll m){
  if (p == 0) return 1;
  ll ans = ModPow(b, p/2, m);
  ans = mod(ans*ans,m);
  if (p&1) ans = mod(ans*b,m);
  return ans;
}
 
// Eulers Theorem
ll Inverse(ll a, ll b){
  return (a * ModPow(b,c-2,c));
}
 
ll factorial(ll n){
    if (n > 0) {
        result[0] = 1;
        for (ll i = 1; i <= n; ++i) {
            result[i] = (i * result[i - 1]) % c;
        }
        return result[n];
    }
    return 1;
}
 
ll combinations (ll a, ll b){
  ll cnt = 1;
  ll temp;
  for (ll i = 0; i < b; i++){
    temp = ((a%c)-(i%c)) % c;
    if(temp < 0){
      temp = (temp + c) % c;
    }
 
    cnt = (cnt * temp) % c;
  }
  return ((cnt % c) * (ModPow(factorial(b),c-2,c)))%c;
}
 
int main() {
 
  ll N, M, K, almacen = 0;
  scanf("%lld %lld %lld", &N, &M, &K);
 
  if (!(K & 1)){
    for (ll i = 0; i < K; i++){
      ll a = (combinations(K, K-i) * ((ll) ModPow(K-i, N,c))) % c;
      a = (a * ((ll) ModPow(-1, K-i,c))) % c;
      almacen = (almacen + a) % c;
    }
  } 
 
  else{
    for (ll i = 0; i < K; i++){
      ll a = (combinations(K, K-i) * ((ll) ModPow(K-i, N,c))) % c;
      a = (a * ((ll) ModPow(-1, K+1-i,c))) % c;
      almacen = (almacen + a) % c;;
    }
  }
 
  cout << ((combinations(M, K) %c) * (almacen % c))%c << "\n";
}

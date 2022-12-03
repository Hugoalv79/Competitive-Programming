#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t; scanf("%d", &t);
    ll a,b,c;
    while(t--){
        scanf("%lld %lld %lld", &a, &b, &c); 
        cout << ((a + (b*2) + (c*3))&1 ? 1:0) << "\n";  
    }
    return 0;

}

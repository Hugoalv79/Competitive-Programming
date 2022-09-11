#include <bits/stdc++.h>

using namespace std;

string s;

string Notation(long long int k){
    if (k == 1)
        return "2";
    else if(k % 2 != 0){
        s = "(2*" + Notation(k-1) + ")";
    }
    else{
        s = "(" + Notation(k/2) + ")^2";
    }
    return s;
}

int main(){
    int Tests;
    long long int k;

    scanf("%d", &Tests);
    
    while(Tests--){
        scanf("%lld", &k);
        cout << Notation(k) << "\n";
    }
    return 0;
}

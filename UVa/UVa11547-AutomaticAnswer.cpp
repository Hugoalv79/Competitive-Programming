#include <bits/stdc++.h>

using namespace std;

int main(){
    int N; scanf("%d", &N);
    
    while(N--){
        int n; scanf("%d", &n);
        n = ((((n*567/9)+7492) * 235/47 -498)/10)%10;
        printf("%d\n", n);
    }

    return 0;
}


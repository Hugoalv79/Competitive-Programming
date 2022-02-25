#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, r, c;
    scanf("%d", &N);

    while(N--){
        scanf("%d %d", &r, &c);
        printf("%d\n", (c/3) * (r/3));
    }

    return 0;
}
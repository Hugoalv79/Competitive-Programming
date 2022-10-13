#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;

    while(scanf("%d %d", &N, &M) && (N != 0 || M != 0)){
        vector <int> jack(N), jill(M), mutualCDs;

        for(int i = 0; i < N; ++i) 
            scanf("%d", &jack[i]);
        
        for(int i = 0; i < M; ++i) 
            scanf("%d", &jill[i]);
        
        set_intersection(jack.begin(), jack.end(), jill.begin(), jill.end(), back_inserter(mutualCDs));

        printf("%d\n", mutualCDs.size());
    }
}



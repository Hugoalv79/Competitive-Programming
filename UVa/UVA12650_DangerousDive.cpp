#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, R, alive;
    
    while(scanf("%d %d", &N, &R) != EOF){
        
        vector <bool> people(N);

        for(int i = 0; i < R; ++i){
            scanf("%d", &alive);
            people[alive-1] = true;
        }

        if(N == R)
            printf("*\n");
        
        else{
            for(int i = 0; i < N; ++i)
                if(people[i] == 0)
                    printf("%d ", int(i+1));
            
            printf("\n");
        }
    }

    return 0;
}
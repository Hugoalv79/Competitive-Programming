#include<bits/stdc++.h>

using namespace std;

int hammingDistance(int x, int y) {
    int S = x^y, answer = 0;
    
    while(S){
        S = S & (S-1);
        answer++;
    }

    return answer;
}
#include <bits/stdc++.h>

using namespace std;

// Data Structures
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef tuple<int, int, int> iii;
typedef long long ll;

// Constants
#define endl "\n"
#define LSOne(S) ((S) & -(S))
const int M = 1007;
const ll mod = 1e9 + 7;

// Loops
#define Forba(b, a) for (int i = (b); i < (a); ++i)
#define Forbaeq(b, a) for (int i = (b); i <= (a); ++i)
#define Forn(a) for (int i = 0; i < (a); ++i)
#define Forbai(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define ForaiR(i,a) for (int i = (a)-1; i >= 0; --i)
#define Fauto(a, x) for (auto& a : x)
 
// Data Structures 
#define mp make_pair
#define pb push_back
#define f first
#define s second

// Sizes
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rsz resize

//    BITS
#define isOn(S, j) (S & (1<<j))
#define setBit(S, j) (S |= (1<<j))
#define clearBit(S, j) (S &= ~(1<<j))
#define toggleBit(S, j) (S ^= (1<<j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1<<n)-1)

#define moduloip2(S, N) ((S) & (N-1))   // returns S % N, where N is a power of 2
#define ipot(S) (!(S & (S-1))) // isPowerOfTwo
#define npot(S) (1<<lround(log2(S))) //nearestPowerOfTwo
#define tofflb(S) ((S) & (S-1)) //turnOffLastBit
#define tonlz(S) ((S) | (S+1)) //turnOnLastZero
#define tofflcb(S) ((S) & (S+1)) //turnOffLastConsecutiveBits
#define tonlcz(S) ((S) | (S-1)) //turnOnLastConsecutiveZeroes

int main(){
    return 0;
}


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <vector>
#define rep(i,x,n) for(int i=x;i<n;i++)
#define repd(i,x,n) for(int i=x;i<=n;i++)
#define pii pair<int,int>
#define pll pair<long long ,long long>
#define gbtb ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define MS0(X) memset((X), 0, sizeof((X)))
#define MSC0(X) memset((X), '\0', sizeof((X)))
#define gg(x) getInt(&x)
inline void getInt(int* p);
const int maxn=1000010;
const int inf=0x3f3f3f3f;
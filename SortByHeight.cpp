#include<vector>
#include<algorithm>

using namespace std;

vector<int> sortByHeight(vector<int> a) 
{
    vector<int>tmp=a; sort(tmp.begin(),tmp.end());
    
    int idx = 0;
    for(int i: tmp) {
        if(i>=0) {
            while(a[idx]==-1)
                ++idx;
            a[idx] = i;
            ++idx;
        }
    }
    
    return a;
}
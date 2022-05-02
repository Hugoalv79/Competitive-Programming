// #include<vector>
// #include<algorithm>

// using namespace std;

// vector<int> sortByHeight(vector<int> a) 
// {
//     vector<int>perfect_mirror=a; sort(perfect_mirror.begin(),perfect_mirror.end());
    
//     int paso = 0;
//     for(int i: perfect_mirror) 
//     {   if(i>=0) 
//             {while(a[paso]==-1) {++paso;} //Evitar los árboles
//             a[paso] = i;  
//             ++paso;}
//     }
    
//     return a;
// }
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int> order(std::vector<int> a) {
    vector<int> tmp = a;
    sort(tmp.begin(),tmp.end());
    
    int idx = 0;
    for(int i: tmp) {
        if(i>=0) {
            while(a[idx]==-1)
                {++idx;}
            a[idx] = i;
            ++idx;
        }
    }
    
    return a;
}

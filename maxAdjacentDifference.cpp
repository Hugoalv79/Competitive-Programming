#include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> inputArray {0,1,2,3,4};

//     int a,b;
    
//     a = *min_element(inputArray.begin(), inputArray.end());
    
    
//     b = *max_element(inputArray.begin(), inputArray.end());
//     cout << to_string(b - a);
    
//     return 0;
// }


using namespace std;

int solution( vector <int> inputArray ){
    int maxDifference = 0;
    
    for( int i = 1; i < inputArray.size(); ++i )
        maxDifference = max( maxDifference, abs(inputArray[i] - inputArray[i-1]) );
    
    return maxDifference;
}

int main(){

    vector <int> inputArray {1,2,3,4};

    cout << to_string(solution(inputArray));

    return 0;
}

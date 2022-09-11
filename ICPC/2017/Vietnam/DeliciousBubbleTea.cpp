#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    //  ALMACENAR DATOS
    int N_Kind_Of_Teas, M_Kind_of_Toppings;
    ll X_Money;
    int K, temp, Min = 0;

    // Number of Teas
    scanf("%d", &N_Kind_Of_Teas);
    vector <int> PricesOfKindOfTeas(N_Kind_Of_Teas);
    // Prices of Teas
    for (int i = 0; i < N_Kind_Of_Teas; ++i){
        scanf("%d", &PricesOfKindOfTeas[i]);
    }
    
    // Number of Toppins
    scanf("%d", &M_Kind_of_Toppings);
    vector <int> PricesOfKindOfToppics(M_Kind_of_Toppings);
    // Prices of Toppings
    for (int i = 0; i < M_Kind_of_Toppings; ++i){
        scanf("%d", &PricesOfKindOfToppics[i]);  
    }

    // Toppings than can be mixed with Teas
    vector <vector<int>> combinatoria(N_Kind_Of_Teas);    
    for (int i = 0; i < N_Kind_Of_Teas; ++i){
        scanf("%d", &K);
        for(int j = 0; j < K; ++j){
            scanf("%d", &temp);
            combinatoria[i].push_back(temp);
        } 
    }
    
    scanf("%lld", &X_Money);

    Min = INT_MAX;
    for(int i = 0; i < N_Kind_Of_Teas; ++i){
        for(int j = 0; j < combinatoria[i].size(); ++j){
            temp = PricesOfKindOfTeas[i] + PricesOfKindOfToppics[combinatoria[i][j]-1];
            if(temp < Min){
                Min = temp;
            }
        }
        
    }

    if(X_Money <= Min){
        printf("0\n");
        return 0;
    }
    
    X_Money -= Min;
    cout << X_Money / Min << "\n";

    return 0;
}

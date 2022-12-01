#include <bits/stdc++.h>

using namespace std;

void dfs(){
    
    
}

int main(){
    int N_nodes,M_DirectedEdges,K_MaxTurns,Start_Alob,Start_Bice;
    int MoneyAlob, MoneyBice;
    string str;
    scanf("%d %d %d %d %d", &N_nodes, &M_DirectedEdges, &K_MaxTurns, &Start_Alob, &Start_Bice);

    vector <int> edges(M_DirectedEdges);
    vector<pair<int,int>> nodes(N_nodes);

    int Ui, Vi;
    for(int i = 0; i < M_DirectedEdges; ++i){
        scanf("%d %d", &Ui, &Vi);
        edges[Ui] = Vi;
    }

    int minus, plus;
    for(int i = 0; i < N_nodes; ++i){
        cin >> str;
        
        if(str == "PROPERTY")
            scanf("%d %d", &minus, &plus);
        else if(str == "TAX"){
            plus = 0;
            scanf("%d", &minus);
        }
        else{ // SALARY
            minus = 0;
            scanf("%d", &plus);
        }
        nodes[i] = make_pair(minus,plus);
    }


    

    printf("%d\n%d\n", MoneyAlob, MoneyBice);


    return 0;
}
#include <bits/stdc++.h>

typedef vector<int> vi;
typedef vector<bool> vb;

using namespace std;


enum{ UNVISITED = -1, VISITED = -2}; // Etiquetas básicas

vi dfs_num; /*  No visitados

Si tu intención es utilizar la DFS en forma básica, puedes modificar el código y cambiar vi dfs_enum por 
    vb visited

AL = Adjacency List -> La estructura de datos más eficiente para el recorrido de grafos
AM = Adjacency Matrix
EL = Edges List
Puede resultar beneficioso empezar convirtiendo los grafos de entrada con forma AM o EL a AL antes de comenzar
el recorrido.
*/
void dfs(int u){
    dfs_num[u] = VISITED;
    for(auto& [v,w]: AL[u])
        if (dfs_num[v] == UNVISITED)
            dfs(v);
}




int main(){
    
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
//                             DFS
/* Steven Halim -> Recursive
Esta versión utiliza un vector de entero global: vi dfs_num para distinguir entre
*/


// Indian professor



//   BFS
void BFS(int vtx, int A[][8], int n){
    queue<int> Q;
    int visited[8] {0};
 
    // Initial
    cout << vtx << ", " << flush;  // Visit vertex
    visited[vtx] = 1;
    Q.emplace(vtx);
 
    // Explore
    while (!Q.empty()){
        int u = Q.front();  // Vertex u for exploring
        Q.pop();
        for (int v = 1; v <= n; ++v){  // Adjacent vertices of vertex u
            if (A[u][v] == 1 && visited[v] == 0){  // Adjacent vertex and not visited
                cout << v << ", " << flush;  // Visit vertex
                visited[v] = 1;
                Q.emplace(v);
            }
        }
    }
    printf("\n");
}

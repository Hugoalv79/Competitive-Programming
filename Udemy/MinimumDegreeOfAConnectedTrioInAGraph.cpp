#include <vector>
#include <algorithm>
using std::min;
using std::vector;
typedef vector<int> vi;
typedef vector<vi> MatrixI;
typedef vector<bool> vb;
typedef vector<vb> MatrixB;

class Solution {
    public:
        int minTrioDegree(int n, MatrixI &edges) {
            MatrixB Connected(n+1,vb(n+1));
            vi Conections(n+1);
            for(vi r: edges){
                Conections[r[0]]++;
                Conections[r[1]]++;
                Connected[r[0]][r[1]] = true;
                Connected[r[1]][r[0]] = true;
            }
            int MaxTrio = INT_MAX;
            
            // Por cada nodo
            for(int i = 1 ; i <= n; ++i)
                // Por cada combinacion con otro nodo
                for(int j = i + 1; j <= n; ++j)
                    if(Connected[i][j]) // Si el nodo i está conectado con el nodo j
                        // Checar los demás nodos
                        for(int k = j + 1; k <= n; ++k)
                            if(Connected[i][k] and Connected[j][k]) // Checar si hay otro nodo que este conectado a i y j al mismo tiempo
                                MaxTrio = min(MaxTrio, Conections[i]+Conections[j]+Conections[k]-6);

            return MaxTrio == INT_MAX ? -1 : MaxTrio;
        }
};
/*
You are given an undirected graph. 
You are given an integer n which is the number of nodes in the graph and an 
array edges, where each edges[i] = [ui, vi] indicates that there is an undirected edge between ui and vi.

A connected trio is a set of three nodes where there is an edge between every pair of them.

The degree of a connected trio is the number of edges where one endpoint is in the trio, and the other is not.

Return the minimum degree of a connected trio in the graph, or -1 if the graph has no connected trios.
*/
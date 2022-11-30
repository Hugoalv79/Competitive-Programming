#include <vector>
#include <math.h>
using std::vector;
using std::max;
typedef vector<int>  vi;
typedef vector<vi> MatrixI;
typedef vector<vector<bool>> MatrixB;
typedef vector<bool> vb;

class Solution {
    public:   
        int maximalNetworkRank(int n, MatrixI &roads) {
            // n = TotalCities
            MatrixB Connected (n, vb (n)); 

            vi Conexiones(n);
            
            for (auto r : roads) {
                Conexiones[r[0]]++;
                Conexiones[r[1]]++;
                Connected[r[0]][r[1]] = true;
                Connected[r[1]][r[0]] = true;  
            }
            int Respuesta = 0;
            // j = i + 1 because we don't need check the previous
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                    Respuesta = max(Respuesta, Conexiones[i] + Conexiones[j] - (Connected[i][j] ? 1 : 0));
            
            return Respuesta;
        }
};




/*
                                    Maximal Network Rank
There is an infrastructure of n cities with some number of roads connecting these cities. Each roads[i] = [ai, bi]
indicates that there is a bidirectional road between cities ai and bi.

The network rank of two different cities is defined as the total number of directly connected roads to either city. If a road is directly connected to both cities, it is only counted once.

The maximal network rank of the infrastructure is the maximum network rank of all pairs of different cities.

Given the integer n and the array roads, return the maximal network rank of the entire infrastructure.
*/


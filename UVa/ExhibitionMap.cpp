#include <bits/stdc++.h>
//#include <unorderd_map>
//#include <unordered_set>

using namespace std;

int main() {
    //      VARIABLES
    int KCases, NFriends, MStamps, Astamp;  // 4 del problema
    int GlobalExlusiveStamps;   // 1 secundaria
    
    // ALMACENADORES DE DATOS
    int UniqueStampsOfFriend[51]; // List
    unordered_map <int, int> Frecuencias; // Hash Table
    unordered_set <int> StampsOfFriendSet[51]; // Hash Table
    unordered_set <int>::iterator S; // Aux
    
    // No. Tests
    scanf("%d", &KCases);
    for (int k = 1; k <= KCases; ++k) {
        // Inicializar el conteo de numeros únicos en 0
        for (int i = 0; i<= 10000; ++i){
            Frecuencias[i] = 0;
        }
            
        // No. Friends -> n
        scanf("%d", &NFriends);
        for (int n = 0; n < NFriends; ++n) {
            StampsOfFriendSet[n].clear();
            // No. Stamps
            scanf("%d", &MStamps);
            for (int m = 1; m <= MStamps; ++m){
                // Stamp 1 x 1
                scanf("%d", &Astamp);
                StampsOfFriendSet[n].insert(Astamp);
            }
            
            for ( S = StampsOfFriendSet[n].begin(); S != StampsOfFriendSet[n].end(); ++S){
                Frecuencias[*S] = Frecuencias[*S] + 1;
            }

        } // Fin del almacenamiento de datos sobre qué tantas estampas tiene cada amigo
        
        // CALCULO DE EXCLUSIVIDAD
        GlobalExlusiveStamps = 0;

        for (int n = 0; n < NFriends; ++n) {
            UniqueStampsOfFriend[n] = 0;

            for ( S = StampsOfFriendSet[n].begin(); S != StampsOfFriendSet[n].end(); ++S){
                if (Frecuencias[*S] == 1)
                    UniqueStampsOfFriend[n]++;
            }    
            GlobalExlusiveStamps += UniqueStampsOfFriend[n];
        }
        
        printf("Case %d:", k);
        for (int n = 0; n < NFriends; ++n){
            double Profit = (double)UniqueStampsOfFriend[n]*100.0/(double)GlobalExlusiveStamps;
            printf(" %.6lf%%", Profit);
        }
        printf("\n");
    }  // End of k Tests
    return 0;
}
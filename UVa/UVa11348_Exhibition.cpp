#include <bits/stdc++.h>

using namespace std;

int main(){
    //      VARIABLES
    int KCases, NFriends, MStamps, Astamp;  // 4 del problema
    int GlobalExlusiveStamps;   // 1 secundaria
    
    // Almacenadores de datos
    int ANumbersActive[10001], UniqueStampsOfFriend[51];
    unordered_set <int> StampsOfFriendSet[50];
    unordered_set <int>::iterator S;
    
    // No. Tests
    scanf("%d", &KCases);
    for (int k = 1; k <= KCases; ++k) {
        // Inicializar el conteo de numeros únicos en 0
        for (int i = 0; i<= 10000; ++i) 
            ANumbersActive[i] = 0;
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
                ANumbersActive[*S]++;
            }

        } // Fin del almacenamiento de datos sobre qué tantas estampas tiene cada amigo
        
        // CALCULO DE EXCLUSIVIDAD
        GlobalExlusiveStamps = 0;

        for (int n = 0; n < NFriends; ++n) {
            UniqueStampsOfFriend[n] = 0;
            MStamps = StampsOfFriendSet[n].size();

            for ( S = StampsOfFriendSet[n].begin(); S != StampsOfFriendSet[n].end(); ++S){
                if (ANumbersActive[*S] == 1)
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
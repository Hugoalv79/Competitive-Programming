#include <bits/stdc++.h>

using namespace std;
 
int main(){
    
    int a,b,c = 1;

    while(scanf("%d % d", &a, &b) != EOF){
        if ( c > 1) printf("\n"); // Caso 2 y sig.
        printf("Case %d: %d\n", c++, a + b);

    return 0;
}

// Imprimirá la suma de dos numeros pares hasta encontrase con EOF, y terminará de la siguiente forma

// Ejemplo

// CaseLast-1: xxxxxxx
//
// CaseLast: xxxxxxxxx
// EOF
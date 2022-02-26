#include <bits/stdc++.h>

using namespace std;
 
int main(){
    
    int a,b;

    // Scanf deuelve el número de elementos
    while(scanf("%d %d", &a, &b) == 2)
    // O podemos comprobar por el EOF, p.e
    // while(scanf("%d %d", &a, &b) != EOF)
    printf("%d\n", a + b);

    return 0;
}
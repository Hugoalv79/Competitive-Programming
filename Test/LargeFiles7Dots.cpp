#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char str[30*10+50] {""}, line[30+50] {""}; 
    while(1){
        if (strncmp(line, ".......", 7) == 0) break; // La señal en los primeros 7 caractéres
        fgets(line, 40, stdin);
        strcat(str, line); // Juntar str con line
        strcat(str, " "); // Añadir espacio
        
    }
    printf("%s", str);
    return 0;
}

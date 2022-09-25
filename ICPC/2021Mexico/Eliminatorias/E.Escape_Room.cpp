#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int R,C;
    scanf("%d %d", &R, &C);
    vector<bool> visited(R*C+1);
    vector<vector<int>> AL(R*C+1);
    vector <int> minDistance(R*C+1,-1);
    vector <int> parent(R*C+1);
    
    // Inicialziar
    vector<vector<char>> Matriz(R+1);
    vector<char> tempc(C+1);
    for(int i = 0; i <= R; ++i){
        Matriz[i] = tempc;
    }

    char x, temp;
    int ie, je;
    int contador = 0;
    for(int i = 1; i <= R; ++i){
        for(int j = 1; j <= C; ++j){
            contador++;
            std::cin >> x;
            Matriz[i][j] = x;
            // Ubicar la salida
            if(x == 'E'){
                ie = i; 
                je = j;
            }

            if(Matriz[i][j] != 'X' && Matriz[i][j] != '#'){
                // pos = i,j-1 y i-1,j
                if((j-1) > 0){
                    temp = Matriz[i][j-1];
                    if(temp != 'X' && temp != '#'){
                        AL[contador].push_back(contador-1);
                        AL[contador-1].push_back(contador);

                    }
                }
                if((i-1) > 0){
                    temp = Matriz[i-1][j];
                    if(temp != 'X' && temp != '#'){
                        AL[contador].push_back(contador-C);
                        AL[contador-C].push_back(contador);
                    }
                }

            }
        }
    }

    function <void(int)> bfsSSSP = [&](int source)-> void{
        queue <int> q;
        minDistance[source] = 0;
        parent[source] = source;
        visited[source] = true;
        q.push(source);

        while(!q.empty()){
            int f = q.front(); q.pop();

            for(auto nbr: AL[f]){
                if(!visited[nbr]){
                    visited[nbr] = true;
                    q.push(nbr);
                    parent[nbr] = f;
                    minDistance[nbr] = minDistance[f] + 1;
                }
            }
        }
    };

    // Bfs desde la salida
    bfsSSSP((ie-1)*C+je);

    // RESPUESTA
    int Q, numNodo,i,j;
    cin >> Q;
    while(Q--){
        cin >> i >> j;
        numNodo = (i-1)*C+j; // Convertir c.c a no. nodo
        if(Matriz[i][j]=='E')
            cout << "E\n";
        
        else if(minDistance[numNodo] == -1){
            switch (Matriz[i][j]){
                case 'X':
                    cout << "X\n";
                    break;
                case '#':
                    cout << "W\n";
                    break;
            
                default:
                    cout << "?\n";
                    break;
            }       
        }
        else{
            // 'L' if the person should move left.
            // 'D' if the person should move down.
            // 'R' if the person should move right.
            // 'U' if the person should move up.
            vector<char> base = {'L','D','R','U'};
            vector<char> Opciones;
            vector<char> Acercan;
            vector<char> Alejan;
            
            // Ver si es posible hacer el movimiento
            if(((j-1) > 0) && Matriz[i][j-1] != 'X' && Matriz[i][j-1] != '#')
                Opciones.push_back('L');
            
            if((i+1) <= R && Matriz[i+1][j] != 'X' && Matriz[i+1][j] != '#')
                Opciones.push_back('D');
            
            if((j+1) <= C && Matriz[i][j+1] != 'X' && Matriz[i][j+1] != '#')
                Opciones.push_back('R');

            if((i-1) > 0 && Matriz[i-1][j] != 'X' && Matriz[i-1][j] != '#')
                Opciones.push_back('U');
           
            // Ubicar de las opciones validas, cuales se acercan
            for(int g = 0; g < Opciones.size(); ++g){
                // ¿Se acerca o se aleja?
                if(Opciones[g] == 'L'){
                    if(j>je)
                        Acercan.push_back('L');
                    else
                        Alejan.push_back('L');
                }
            
                else if(Opciones[g] == 'D'){    
                    if(i<ie)
                        Acercan.push_back('D');
                    else
                        Alejan.push_back('D');
                }

                else if(Opciones[g] == 'R'){
                    if(j<je)
                        Acercan.push_back('R');
                    else
                        Alejan.push_back('R');
                }

                else if(Opciones[g] == 'U'){
                    if(i>ie)
                        Acercan.push_back('U');
                    else
                        Alejan.push_back('U');

                }
            }    
            // Buscar respuesta de las que se acercan según orden del problema
            // Iterar primero por las opciones que se acercan
                       
            if(!Acercan.empty())
                cout << Acercan[0] << "\n";
            
            else
                cout << Alejan[0] << "\n"; 
        }
        
    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int M,N,Dominos=0;
    cin>>M>>N;
    Dominos = (M*N);

    if(Dominos%2==0)
    {Dominos=Dominos/2;cout<<Dominos; return 0;}
    
    else
    {Dominos=(Dominos-1)/2;cout<<Dominos; return 0;}

}

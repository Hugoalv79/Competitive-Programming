#include<bits/stdc++.h>

using namespace std;

int main()
{   int Limak,Bob,Counter=0; cin>>Limak>>Bob;

    while(Limak<=Bob)
    {Limak = Limak*3;Bob = Bob*2; ++Counter;}

    cout<<Counter;

    return 0;
}

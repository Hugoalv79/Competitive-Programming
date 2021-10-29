#include<bits/stdc++.h>

using namespace std;

int main()
{   int Price,Initial_Dollars,Bananas,k; cin>>Price>>Initial_Dollars>>Bananas;
    k=Price;Price=0;
    for(int i=1;i<=Bananas;++i)
    {Price+=k*i;}
    
    Price=Initial_Dollars-Price;

    if(Price<=0)
    {cout<<abs(Price);}

    else
    {cout<<"0";}
    
    return 0;
}
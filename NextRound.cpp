#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,contador=0,xfl8;
    cin>>n>>k; 
    int Students[n];
    for(int i=0;i<n;++i)
        {cin>>Students[i];}
    
    xfl8 = Students[k-1];

    for(int j=0;j<n;++j)
        {if((xfl8<=Students[j])&&(Students[j]!=0))
            {contador++;}}

    cout<<contador;
    return 0;
}
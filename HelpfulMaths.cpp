#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    string a="",Chosen=""; cin>>a;
    
    
    for(int i=0; i<a.size(); ++i)
        {if(a[i]!='+')
            {Chosen.push_back(a[i]);}}
    sort(Chosen.begin(), Chosen.end());

    for(int k=0;k<Chosen.size()-1;++k)
    {cout<<Chosen[k]<<'+';}
    cout<<Chosen[Chosen.size()-1];

    return 0;
}
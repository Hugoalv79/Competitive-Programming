#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int n {0}; scanf("%d", &n);
    int X {0};
    string wagon {}; 

    for(int i=0;i<n;++i)
        {
        cin>>wagon;
        if (strstr(wagon.c_str(), "++")) {X=X+1;}
        else {X=X-1;}
        }
    printf("%d",X);

    return 0;
}
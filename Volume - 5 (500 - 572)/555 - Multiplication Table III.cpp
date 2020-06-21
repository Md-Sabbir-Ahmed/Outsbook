#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,k,c=0;
    while(cin>>m>>n>>k)
    {
        cout<<"Case "<<++c<<":\n";
        for(int i=n;i<=k;i++)
        {
            cout<<m<<" X "<<i<<" = "<<m*i<<"\n";
        }
    }
    return 0;
}


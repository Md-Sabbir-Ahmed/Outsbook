#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,c=0;
    while(cin>>m>>n)
    {
        cout<<"Case "<<++c<<":\n";
        if(n==0)
        {
            cout<<m<<" X "<<0<<" = "<<m*0<<"\n";
        }
        for(int i=1;i<=n;i++)
        {
            cout<<m<<" X "<<i<<" = "<<m*i<<"\n";
        }
    }
    return 0;
}


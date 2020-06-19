#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,b,m,y,ans;
    while(cin>>x>>b>>m>>y)
    {
        ans=x-((b+m)-y);
        cout<<ans<<"\n";
    }
    return 0;
}



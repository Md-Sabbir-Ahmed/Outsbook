#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,e,b,ans;
    cin>>m>>e>>b;
    ans=100-((m+e)-b);
    cout<<ans<<"%";
    return 0;
}



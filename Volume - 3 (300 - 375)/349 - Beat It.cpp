#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,t,ans;
    while(cin>>m>>n>>t)
    {
        ans=(t/m)+(t/n)*2;
        cout<<ans<<" times\n";
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y,t,t1,ans;
    cin>>x>>y>>t>>t1;
    ans=(t-(t1*x))/y;
    cout<<ans<<" Taka";
    return 0;
}



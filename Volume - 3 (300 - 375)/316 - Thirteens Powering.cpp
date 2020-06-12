#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,m,ans;
    while(cin>>n>>m)
    {
        ans=n+n;
        ans=ans/13.0;
        ans=ans+13.0;
        ans=pow(ans,m);
        cout<<fixed<<setprecision(3)<<ans<<"\n";
    }

    return 0;
}



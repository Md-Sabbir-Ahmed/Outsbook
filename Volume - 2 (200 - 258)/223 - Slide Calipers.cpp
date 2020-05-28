#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float m,v,ans;
    cin>>m>>v;
    ans=(m/10)+v/100;
    cout<<fixed<<setprecision(2)<<ans<<" cm";
    return 0;
}



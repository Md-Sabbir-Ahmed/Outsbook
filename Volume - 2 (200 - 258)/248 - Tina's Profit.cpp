#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float p,n,r;
    float ans;
    cin>>p>>n>>r;
    ans=(p*((n*r)/100));
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}



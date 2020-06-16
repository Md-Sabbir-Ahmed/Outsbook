#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,x,ans;
    while(cin>>n>>x)
    {
        ans=((x/365)/n);
        cout<<fixed<<setprecision(3)<<ans<<" taka\n";
    }
    return 0;
}



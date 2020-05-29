#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,l,ans,ans1;
    cin>>n>>m>>l;
    ans=(n*m);
    ans1=ans*l/100;
    cout<<ans1+ans<<" Points";
    return 0;
}



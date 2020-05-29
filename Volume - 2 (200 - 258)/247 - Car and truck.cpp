#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,p,m,ans1,ans2;
    cin>>n>>p>>m;
    ans1=((n/p)-m)/2;
    ans2=ans1+m;
    cout<<ans1<<" "<<ans2;
    return 0;
}



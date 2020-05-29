#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,n,ans;
    cin>>m>>n;
    ans=(m-n)*365;
    cout<<ans<<"\n";
    cout<<ans%100;
    return 0;
}



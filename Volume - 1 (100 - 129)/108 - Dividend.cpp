#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d,q,ans,rem;
    cin>>d>>q;
    rem=d/3;
    ans=(d*q)+rem;
    cout<<ans<<"\n";
    return 0;
}



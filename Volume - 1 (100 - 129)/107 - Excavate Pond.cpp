#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,d1,d2,ans;
    cin>>x>>d1>>d2;
    ans=((x*d1)/d2)-x;
    cout<<ans;
    return 0;
}



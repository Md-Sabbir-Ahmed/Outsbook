#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float s,l,ans;
    cin>>s>>l;
    ans=sqrt(pow(s,2)+pow(l,2));
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}



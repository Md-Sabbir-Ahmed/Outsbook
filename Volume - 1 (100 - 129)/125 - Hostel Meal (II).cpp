#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s1,s2,d1,d2,ans;
    cin>>s1>>d1>>d2>>s2;
    ans=((s1*(d1-d2))/(s1+s2));
    cout<<ans<<" days";
    return 0;
}



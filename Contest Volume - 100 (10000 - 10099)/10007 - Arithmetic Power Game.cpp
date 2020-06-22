#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,ans;
    while(cin>>x>>y)
    {
        ans=pow(x,y)+pow(y,x);
        cout<<ans<<"\n";
    }
    return 0;
}



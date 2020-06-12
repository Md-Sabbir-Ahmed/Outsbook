#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a,h,ans;
    while(cin>>a>>h)
    {
        ans=h*((a/2.0)+a);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



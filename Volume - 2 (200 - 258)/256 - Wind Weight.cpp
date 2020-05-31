#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long double	 x,w,l,h,ans,ans1;
    cin>>x>>w>>l>>h;
    ans=x*1000.0;
    ans1=ans*w*l*h;
    cout<<fixed<<setprecision(2)<<ans1<<" kg";
    return 0;
}



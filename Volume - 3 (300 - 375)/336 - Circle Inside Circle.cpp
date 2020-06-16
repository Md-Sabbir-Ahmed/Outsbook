#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,R,pi,ans;
    pi=3.1416;
    while(cin>>r>>R)
    {
        ans=(pi*R*R)-(pi*r*r);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



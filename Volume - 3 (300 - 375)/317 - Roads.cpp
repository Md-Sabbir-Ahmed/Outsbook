#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  t,m;
    double a,ans;
    while(cin>>t>>m)
    {
        a=t/4.0;
        ans=(a*m)+((a*m)/2.0)+((a*m)/3.0)+((a*m)/5.0);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



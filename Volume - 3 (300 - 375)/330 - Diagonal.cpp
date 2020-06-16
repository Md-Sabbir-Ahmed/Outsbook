#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x;
    double ans;
    while(cin>>x)
    {
        ans=sqrt(x*x+x*x);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



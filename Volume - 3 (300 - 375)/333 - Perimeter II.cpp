#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,ans;
    while(cin>>x)
    {
        ans=4*(sqrt((x*x)/2));
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



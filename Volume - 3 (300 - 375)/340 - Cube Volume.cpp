#include<bits/stdc++.h>
using namespace std;

int main()
{
    double s,ans;
    while(cin>>s)
    {
        ans=pow(sqrt(s/6),3);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



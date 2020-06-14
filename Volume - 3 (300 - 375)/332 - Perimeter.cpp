#include<bits/stdc++.h>
using namespace std;

int main()
{
    float w,h,p,ans;
    while(cin>>w>>p)
    {
        h=(p/100.0)*w;
        ans=(2*h)+(2*w);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



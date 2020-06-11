#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double r,a,b,ans;
    while(cin>>r)
    {
        a=r/2.0;
        b=a/2.0;
        ans=(r*r*3.1416)+(a*a*3.1416)+(b*b*3.1416);
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



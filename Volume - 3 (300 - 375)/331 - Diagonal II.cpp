#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,w,ans;
    while(cin>>h)
    {
        w=1.5*h;
        ans=sqrt(w*w+h*h);
        cout<<fixed<<setprecision(2)<<ans<<"\n";

    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k=0;
    float s,l;
    float ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        k++;
       cin>>s>>l;
       ans=(l/(s/3600));
      cout<<"Case "<<k<<": "<<fixed<<setprecision(2)<<ans<<" km/h\n";
    }
    return 0;
}



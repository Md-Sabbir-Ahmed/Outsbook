#include<bits/stdc++.h>
using namespace std;

int main()
{
    double m,ans;
    while(cin>>m)
    {
        ans=pow(m,4)+4*pow(m,3)*(1/m)+6*pow(m,2)*pow((1/m),2)+4*m*pow((1/m),3)+pow((1/m),4);
        cout<<fixed<<setprecision(3)<<ans<<"\n";
    }
    return 0;
}



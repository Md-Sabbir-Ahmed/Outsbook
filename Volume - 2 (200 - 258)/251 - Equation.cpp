#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m;
    float ans;
    cin>>m;
    ans=pow((m+(1.0/m)),4);
    cout<<fixed<<setprecision(3)<<ans;
    return 0;
}



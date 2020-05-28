#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int xADDy,n;
    float ans1,ans2,x,y;
    cin>>xADDy>>n;
    x=(xADDy+n)/2;
    y=xADDy-x;
    ans1=x/y;
    ans2=x*y;
    cout<<fixed<<setprecision(2)<<ans1<<"\n";
    cout<<fixed<<setprecision(2)<<ans2;
    return 0;
}



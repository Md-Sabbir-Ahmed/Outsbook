#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,ans;
    while(cin>>x1>>x2>>y1>>y2)
    {
        ans=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        cout<<fixed<<setprecision(2)<<ans<<"\n";
    }
    return 0;
}



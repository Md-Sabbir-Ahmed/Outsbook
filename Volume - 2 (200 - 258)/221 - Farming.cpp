#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,p,c,d,day,area;
    cin>>m>>p>>c>>d;
    day=((p*c)+d)/(m-p);
    area=day*m;
    cout<<day<<" "<<area;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,area;
    while(cin>>l)
    {
        area=((pow(l,2))/2);
        cout<<fixed<<setprecision(2)<<area/10000.0<<" m^2\n";
    }
    return 0;
}



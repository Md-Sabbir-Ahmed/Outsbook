#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double x,y,t,Acceleration,Distance;
    cin>>x>>y>>t;
    Acceleration=(y-x)/t;
    Distance=(x*t)+(0.5*Acceleration*pow(t,2));
    cout<<fixed<<setprecision(1)<<Acceleration<<"\n" ;
    cout<<fixed<<setprecision(1)<<Distance<<"\n" ;

    return 0;
}



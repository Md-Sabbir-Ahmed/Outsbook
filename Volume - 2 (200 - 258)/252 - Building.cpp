#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double m,n,d,p,q,t,d1,d2;
    long long c1,c2;
    cin>>m>>n>>d>>p>>q>>t;
    d1=(m*n)*d;
    c1=p*t*d1;
    d2=((p*d)/(p+q));
    d2=d2*(m*n);
    c2=(p+q)*d2*t;

    cout<<"Person : "<<p<<"\n";
    cout<<"Days   : "<<d1<<" Days\n";
    cout<<"Charge : "<<c1<<" Taka\n\n";
    cout<<"Person : "<<p+q<<"\n";
    cout<<"Days   : "<<d2<<" Days\n";
    cout<<"Charge : "<<c2<<" Taka\n";
    return 0;
}



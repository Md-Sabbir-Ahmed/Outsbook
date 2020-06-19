#include<bits/stdc++.h>
using namespace std;

int main()
{
    char k;
    long double m,p,a,b;
    double x,y,z,n,r;
    while(cin>>m>>p>>k>>x>>y>>z)
    {
       a=(m*(p/100));
       b=(m-a);
       cout<<"Monthly Save = "<<fixed<<setprecision(2)<<b<<"\n";
       n=x+y+z;
       cout<<"Total Cost = "<<fixed<<setprecision(2)<<n<<"\n";
       r=ceil(n/b);
       cout<<"Minimum Time = "<<(int)r<<" Months\n";
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d1,d2,rem=0,n1,n2,t;
    cin>>d1>>d2>>t;
    n1=d1,n2=d2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<(d1*d2/n1)*t;
    return 0;
}

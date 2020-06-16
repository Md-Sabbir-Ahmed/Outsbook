#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    while(cin>>n>>k>>m)
    {
        if(m==1)
        {
            cout<<n*k<<" taka wins\n";
        }
        else if(m==0)
        {
            cout<<2*n*k<<" taka lose\n";
        }
    }
    return 0;
}



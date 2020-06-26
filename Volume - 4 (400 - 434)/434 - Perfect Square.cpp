#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a;
    double k,r;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>a;
            k=sqrt(a);
            r=k-(long long)k;
            if(r==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }

    return 0;
}



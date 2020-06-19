#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m>n)
        {
            cout<<m<<" > "<<n<<"\n";
        }
        if(m<n)
        {
            cout<<m<<" < "<<n<<"\n";
        }
        if(m==n)
        {
            cout<<m<<" = "<<n<<"\n";
        }
    }
    return 0;
}



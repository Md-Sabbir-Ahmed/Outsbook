#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            return 0;
        }
        for(int i=1;i<=n;i++)
        {
            int k=(n+1)*i;
            cout<<k<<"\n";
        }
    }
    return 0;
}



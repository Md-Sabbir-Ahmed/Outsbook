#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,ans;
    while(cin>>m>>n)
    {
        ans=(m*n)-(m+n);
        cout<<m<<" * "<<n<<" = "<<ans<<"\n";
    }
    return 0;
}



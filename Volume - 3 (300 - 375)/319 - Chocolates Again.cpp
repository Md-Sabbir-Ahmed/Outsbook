#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,ans,temp,m1,m2,ans2;
    while(cin>>m>>n)
    {
        ans=(m-n)*365;
        temp=ans;
        m1=temp%10;
        temp=temp/10;
        m2=temp%10;
        ans2=m2*10+m1;
        cout<<ans<<"\n";
        cout<<ans2<<"\n";

    }
    return 0;
}



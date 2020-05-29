#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,pow1,sum1=0,r,m,m1,ans,q,pow2,w;
    cin>>a;
    pow1=pow(a,2);
    q=pow1;
    while(q!=0)
    {
        r=q%10;
        sum1=sum1+r;
        q=q/10;
    }
    pow2=pow(sum1,2);
    m=pow1-pow2;
    m1=pow(m,2);
    w=m1;
    ans=w%10;
    cout<<ans;
    return 0;
}



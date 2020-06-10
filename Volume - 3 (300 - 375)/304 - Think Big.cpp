#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,ans,temp;
    int r1,r2,m2;
    cin>>n;
    ans=n*(567%100);
    ans=ans-(357%100);
    ans=ans+(7492%100);
    ans=(ans*(9879%100));
    ans=ans-(4787%100);
    ans=(ans*(7493%100))%1000;
    ans=ans-(498%100);
    ans=(ans*(1237%100))%1000;
    ans=ans+(100%100);
    ans=(ans*(9879%100))%1000;
    ans=ans-(9%100);
    temp=ans;
        r1=temp%10;
        temp=temp/10;
        r2=temp%10;
        m2=r2*10+r1;
    cout<<m2;

    return 0;
}




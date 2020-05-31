#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,r,temp,sum=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    cout<<sum;
    return 0;
}



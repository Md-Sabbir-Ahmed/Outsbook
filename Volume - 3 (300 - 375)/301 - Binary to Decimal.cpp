#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,bin=1,dec=0,temp,r;
    cin>>x;
    temp=x;
    while(temp>0)
    {
        r=temp%10;
        dec=dec+r*bin;
        bin=bin*2;
        temp=temp/10;
    }
    cout<<dec;
    return 0;
}


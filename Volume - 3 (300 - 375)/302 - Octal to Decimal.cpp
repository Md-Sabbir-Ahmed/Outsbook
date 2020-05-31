#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,temp,oct=1,dec=0,r;
    cin>>x;
    temp=x;
    while(temp>0)
    {
        r=temp%10;
        dec=dec+r*oct;
        oct=oct*8;
        temp=temp/10;
    }
    cout<<dec;
    return 0;
}



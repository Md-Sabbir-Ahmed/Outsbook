#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m,temp,r,rev=0,maximum=0,minimum=0,temp2,rev2=0,r2;
    cin>>m;
    temp=m;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*r+r;
        temp=temp/10;
    }
    if(rev>m)
    {
        maximum=rev;
        minimum=m;
    }
    else{
        maximum=m;
        minimum=rev;
    }
    int diff=maximum-minimum;
    temp2=diff;
    while(temp2!=0)
    {
        r2=temp2%10;
        rev2=rev2+r2;
        temp2=temp2/10;
    }
    cout<<rev2;
    return 0;
}



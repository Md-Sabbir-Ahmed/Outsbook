#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h,m,n,ans;
    cin>>h>>m>>n;
    ans=(((h-m)/(m-n))*2)+1;
    cout<<ans;
    return 0;
}



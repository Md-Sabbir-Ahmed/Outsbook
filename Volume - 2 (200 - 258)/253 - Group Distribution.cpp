#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,t,s,e;
    cin>>n>>m>>t;
    s=((n/m)*(t-1))+1;
    e=(n/m)*t;
    cout<<s<<" "<<e;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,y,ans,ans1;
    cin>>x>>y;
    ans=1000+x-y;
    ans1=(100*ans)/1000;
    cout<<ans1-100<<"%";
    return 0;
}



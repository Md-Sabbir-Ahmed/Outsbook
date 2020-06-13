#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m,l,ans,ans1;

    while(cin>>n>>m>>l){
    ans=(n*m);
    ans1=ans*l/100;
    cout<<ans1+ans<<" Points\n";
    }

   return 0;
}


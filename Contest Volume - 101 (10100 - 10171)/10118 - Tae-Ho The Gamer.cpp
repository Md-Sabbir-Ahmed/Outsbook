#include<bits/stdc++.h>
using namespace std;

int main()
{
    int e,m,h,ans,c=0;
    while(cin>>e>>m>>h)
    {
        ans=(e*1)+(m*2)+(h*3);
        cout<<"Case "<<++c<<": Tae-Ho takes "<<ans<<" hours to complete the game\n";
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,ans;
    while(cin>>a>>b>>c>>d>>e)
    {
        ans=(a-b+c-d+e);
        if(ans==0)
        {
            cout<<"Welcome Anna\n";
            continue;
        }
        if(ans%11==0)
        {
            cout<<"Anna can enter\n";
        }
        else{
            cout<<"Anna cannot enter\n";
        }
    }
    return 0;
}



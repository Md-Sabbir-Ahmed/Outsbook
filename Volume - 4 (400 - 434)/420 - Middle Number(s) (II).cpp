#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,e;
    while(cin>>s>>e)
    {
        int k=0;
        k=s+e;
        if(k%2==0)
        {
            cout<<k/2<<"\n";
        }
        else
        {
            cout<<k/2<<" "<<(k/2)+1<<"\n";
        }
    }
    return 0;
}



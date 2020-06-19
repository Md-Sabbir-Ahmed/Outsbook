#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum=0;
    while(cin>>x>>y)
    {
        if(x==0 && y==0)
        {
            return 0;
        }
        int k=max(x,y);
        sum=sum+k;
        cout<<k<<" "<<sum<<"\n";
    }
    return 0;
}


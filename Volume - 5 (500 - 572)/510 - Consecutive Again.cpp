#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"0\n";
        }
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
        }
    }
    return 0;
}



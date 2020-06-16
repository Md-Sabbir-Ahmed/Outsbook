#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    while(cin>>l)
    {
        int sum=0;
        for(int i=l;i<=l+6;i=i+2)
        {
            sum=sum+i*i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}



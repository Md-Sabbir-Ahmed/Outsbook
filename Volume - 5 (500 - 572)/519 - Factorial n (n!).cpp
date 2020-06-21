#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0|| n==1)
        {
            cout<<"1"<<"\n";
            continue;
        }
        long long  fact=1;
        for(int i=n;i>=1;i--)
        {
            fact=fact*i;
        }
        cout<<fact<<"\n";
    }
    return 0;
}



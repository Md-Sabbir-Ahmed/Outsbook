#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n%2==1)
        {
            cout<<(n/2)+1<<"\n";
        }
        else
        {
            cout<<(n/2)<<" "<<(n/2)+1<<"\n";
        }
    }
    return 0;
}



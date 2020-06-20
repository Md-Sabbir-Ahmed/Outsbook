#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n1,n2,rem;
    while(cin>>n1>>n2)
    {
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        cout<<n1<<"\n";
    }
    return 0;
}



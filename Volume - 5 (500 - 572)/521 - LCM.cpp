#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n1,n2,rem,a,b;
    while(cin>>n1>>n2)
    {
        a=n1;
        b=n2;
        while(n2!=0)
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }

        cout<<(a*b)/n1<<"\n";
    }
    return 0;
}

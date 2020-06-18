#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            return 0;
        }
        else
        {
            int c=max(a,b);
            cout<<c<<"\n";
        }
    }
    return 0;
}



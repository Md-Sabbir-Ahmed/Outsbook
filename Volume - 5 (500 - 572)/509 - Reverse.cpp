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
        for(int i=n;i>=1;i--)
        {
            if(i==1)
            {
                cout<<i<<"\n";
            }
            else{
             cout<<i<<" ";
            }

        }
    }
    return 0;
}



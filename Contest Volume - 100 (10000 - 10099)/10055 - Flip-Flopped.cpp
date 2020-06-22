#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    while(cin>>t)
    {
        int c=0;
        while(t--)
        {
            cin>>x;
            if(x%2==0)
            {
                cout<<"Case "<<++c<<": Odd"<<"\n";
            }
            else{
                cout<<"Case "<<++c<<": Even"<<"\n";
            }
        }
    }
    return 0;
}



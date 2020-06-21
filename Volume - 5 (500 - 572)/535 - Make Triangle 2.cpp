#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int row=n;row>=1;row--)
        {
            for(int col=1;row>=col;col++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}

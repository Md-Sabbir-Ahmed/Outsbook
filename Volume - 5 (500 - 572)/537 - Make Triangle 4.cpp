#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int row=1;row<=n;row++)
        {
            for(int col=1;n-row>=col;col++)
            {
                cout<<" ";
            }
            for(int col=1;row>=col;col++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}

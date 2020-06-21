#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    while(cin>>n)
    {
        cout<<"Case "<<++c<<":\n";
        for(int i=1;i<=10;i++)
        {
            cout<<n<<" X "<<i<<" = "<<n*i<<"\n";
        }
    }
    return 0;
}



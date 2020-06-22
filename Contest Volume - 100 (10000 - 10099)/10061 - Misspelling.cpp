#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int c=0;
        while(n--)
        {
            int a;
            string s;
            cin>>a>>s;
            s.erase(s.begin() + (a-1));
            cout<<"Case "<<++c<<": "<<s<<"\n";
        }
    }
    return 0;
}



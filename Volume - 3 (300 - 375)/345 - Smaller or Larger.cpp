#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        c=a+(a+1)+(a+2);
        if(c>b)
        {
            cout<<"A is too larger than B\n";
        }
        else{
            cout<<"A is too smaller than B\n";
        }
    }
    return 0;
}



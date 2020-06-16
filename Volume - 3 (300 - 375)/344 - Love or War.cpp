#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,yes,no;
    while(cin>>n>>yes)
    {
        no=n-yes;
        if(no>yes)
        {
            cout<<"The war is going on.\n";
        }
        else{
            cout<<"The war is stop.\n";
        }
    }
    return 0;
}



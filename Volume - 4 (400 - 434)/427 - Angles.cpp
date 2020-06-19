#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<90)
        {
            cout<<"ACUTE ANGLE\n";
        }
        if(n==90)
        {
            cout<<"RIGHT ANGLE\n";
        }
        if(n>90)
        {
            cout<<"OBTUSE ANGLE\n";
        }
    }
    return 0;
}



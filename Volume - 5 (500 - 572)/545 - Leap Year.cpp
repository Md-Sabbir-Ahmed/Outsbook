#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>y;
            if(y%400==0 || y%4==0 && y%100!=0)
            {
                cout<<"Leap year\n";
            }
            else{
                cout<<"Ordinary year\n";
            }
        }
    }
    return 0;
}



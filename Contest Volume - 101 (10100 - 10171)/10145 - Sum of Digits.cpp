#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,r;
    while(cin>>n)
    {
        int sum=0;
        temp=n;
        while(temp!=0)
        {
          r=temp%10;
          sum=sum+r;
          temp=temp/10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}



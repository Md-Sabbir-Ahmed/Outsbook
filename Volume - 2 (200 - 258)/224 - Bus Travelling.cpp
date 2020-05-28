
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float sum=0,avg,a;
    for(int i=1;i<=7;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    avg=sum/7;
    cout<<avg;
    return 0;
}



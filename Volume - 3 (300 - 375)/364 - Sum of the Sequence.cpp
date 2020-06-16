#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0;
    while(cin>>n)
    {
        int sum=0;
        count1++;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                sum=sum-i;
            }
            else{
                sum=sum+i;
            }
        }
        cout<<"Case "<<count1<<": "<<sum<<"\n";
    }
    return 0;
}



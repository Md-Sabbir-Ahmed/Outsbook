#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n)
    {
        int c=0;
        while(n--){
        cin>>m;
        int sum=0;
        for(int i=1;i<=m;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
            }
            if(i%2==1)
            {
                sum=sum-i;
            }
        }
        cout<<"Case "<<++c<<": "<<sum<<"\n";
    }
 }
    return 0;
}



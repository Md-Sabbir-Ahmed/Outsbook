#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(cin>>a>>b){
            long long sum=0;
        for(int i=a;i<=b;i++)
        {
            if(i%2==1){
              sum=sum+i;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}



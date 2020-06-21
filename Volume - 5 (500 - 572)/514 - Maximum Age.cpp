#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,maximum=-1;
    long long k;
    while(cin>>n){
            if(n==0)
            {
                return 0;
            }
    for(int i=0;i<n;++i)
    {
        cin>>k;
        if(maximum<k)
        {
            maximum=k;
        }
    }
    cout<<maximum<<"\n";
  }
    return 0;
}


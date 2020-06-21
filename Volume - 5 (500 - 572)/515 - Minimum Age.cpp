#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    long long k;
    while(cin>>n){
            int minimum=55;
            if(n==0)
            {
                return 0;
            }
    for(int i=0;i<n;++i)
    {
        cin>>k;
        if(minimum>k)
        {
            minimum=k;
        }
    }
    cout<<minimum<<"\n";
  }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
 int  n,a,b,c,d,ans;

 while(cin>>n)
    {
     ans=(n-8)/4;
     if(ans%2==0)
     {
         ans=ans-1;
         a=ans;
         for(int i=0;i<=6;i=i+2)
         {
             cout<<a+i<<" ";
         }
        cout<<"\n";
     }
     else
     {
         a=ans;
         for(int i=0;i<=6;i=i+2)
         {
             cout<<a+i<<" ";
         }
        cout<<"\n";
     }
    }
 return 0;
}


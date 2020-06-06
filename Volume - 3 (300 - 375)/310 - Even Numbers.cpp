#include <bits/stdc++.h>

using namespace std;

int main()
{
 int  n,a,ans;

 while(cin>>n)
    {
     ans=(n-10)/5;
     if(ans%2==1)
     {
         ans=ans-1;
         a=ans;
         for(int i=0;i<=8;i=i+2)
         {
             cout<<a+i<<" ";
         }
        cout<<"\n";
     }
     else
     {
         a=ans-2;
         for(int i=0;i<=8;i=i+2)
         {
             cout<<a+i<<" ";
         }
        cout<<"\n";
     }
    }
 return 0;
}

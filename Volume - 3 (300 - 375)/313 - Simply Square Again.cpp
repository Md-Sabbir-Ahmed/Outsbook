#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    while(cin>>a)
    {
      int b,sum=0,r=0,c,d,e,f,temp;

      b= a*a;
      temp=b;
      cout<<b<<endl;
      while(b!=0)
      {
          r=b%10;
          sum=sum+r;
          b=b/10;
      }
      cout<<sum<<endl;
      c=sum*sum;
      cout<<c<<endl;
      d=temp-c;
      cout<<d<<endl;
      e=d*d;
      cout<<e<<endl;
      f=e%10;
      cout<<f<<"\n";
    }
    return 0;
}



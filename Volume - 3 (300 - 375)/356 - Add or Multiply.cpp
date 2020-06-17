#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  x,y,ans;
    while(cin>>x>>y)
    {
        if(x<0 || x>100)
        {
            return 0;
        }
      else if(x<10 && y<10)
      {
           if(x==y)
          {
             ans=x*y;
          }
          else{
           ans=x+y;
          }
      }
      else if(x<=19 && y<=19)
      {
          if(x==y)
          {
             ans=x*y*10;
          }
          else{
           ans=x+y+10;
          }
      }
      else if(x<=49 && y<=49)
      {
          if(x==y)
          {
             ans=x*y*25;
          }
          else{
           ans=x+y+25;
          }
      }
      else if(x<=100 && y<=100)
      {
          if(x==y)
          {
             ans=x*y*55;
          }
          else{
           ans=x+y+55;
          }
      }
      cout<<ans<<"\n";

    }
    return 0;
}


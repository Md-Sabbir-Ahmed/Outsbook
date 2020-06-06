#include <bits/stdc++.h>

using namespace std;

int main()
{
 int  x, y,z;

 while(cin>>x>>y>>z)
    {
      cout<<min(min(x,y),z)<<"\n";
    }
 return 0;
}

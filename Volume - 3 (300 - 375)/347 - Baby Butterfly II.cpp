#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
     while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {

        int a=x1+x2+x3;
        int b=y1+y2+y3;
        if(a%3==0)
        {
            cout<<a/3<<" ";
        }
        else{
            cout<<a<<"/3 ";
        }
        if(b%3==0)
        {
            cout<<b/3<<"\n";
        }
        else{
            cout<<b<<"/3\n";
        }
    }
    return 0;
}



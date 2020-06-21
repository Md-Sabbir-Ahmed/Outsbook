#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c1,c2;
    double x1,x2,y1,y2,a,b;
    while(cin>>x1>>c1>>x2>>y1>>c2>>y2)
    {
        a=(x1/x2);
        b=(y1/y2);
        if(a==b)
        {
            cout<<"x = y\n";
        }
        if(a>b)
        {
            cout<<"x > y\n";
        }
        if(a<b)
        {
            cout<<"x < y\n";
        }
    }
    return 0;
}



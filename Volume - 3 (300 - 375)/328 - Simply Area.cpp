#include<bits/stdc++.h>
using namespace std;

int main()
{
    double h,w,area1,area2;
    while(cin>>h)
    {
        w=4*h;
        area1=w*h;
        area2=ceil((0.5)*area1);
        cout<<fixed<<setprecision(2)<<"Area of Rectangle: "<<area1<<"\n";
        cout<<fixed<<setprecision(0)<<"Area of Triangle: "<<area2<<"\n";
    }
    return 0;
}



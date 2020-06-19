#include<bits/stdc++.h>
using namespace std;

int main()
{
    float l,w,r,x,y;
    while(cin>>l){
    w=l*0.6;
    r=l*0.2;
    x=l*0.45;
    y=l*0.3;
    cout<<fixed<<setprecision(0);
    cout<<"L = "<<l;
    cout<<"\nW = "<<w;
    cout<<"\nR = "<<r;
    cout<<fixed<<setprecision(2);
    cout<<"\n(X, Y) = ("<<x<<", "<<y<<")"<<"\n";
 }
    return 0;
}

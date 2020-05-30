#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float m,n,w,l;
    cin>>m>>n;
    l=sqrt(((n/m)/3));
    w=l*3;
    cout<<fixed<<setprecision(2);
    cout<<"The length is "<<l<<" meter\n";
    cout<<"The width is "<<w<<" meter\n";
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,xADDl,xADDm,xADDn,xADDo,S,l,m,n,o;
    cin>>xADDl>>xADDm>>xADDn>>xADDo>>S;
    x=((xADDl+xADDm+xADDn+xADDo)-S)/4;
    l=xADDl-x;
    m=xADDm-x;
    n=xADDn-x;
    o=xADDo-x;
    cout<<"x = "<<x<<"\n";
    cout<<"l = "<<l<<"\n";
    cout<<"m = "<<m<<"\n";
    cout<<"n = "<<n<<"\n";
    cout<<"o = "<<o<<"\n";
    return 0;
}



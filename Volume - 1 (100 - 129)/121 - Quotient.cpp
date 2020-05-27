#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x1,q1,r1,q2,r2,x2,num;
    cin>>x1>>q1>>r1>>x2;
    num=(x1*q1)+r1;
    q2=num/x2;
    r2=num%x2;
    cout<<q2<<" "<<r2;
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int L,W,l,w,a,b,ans1;
    cin>>L>>W>>l>>w;
    a=2*l;
    b=2*w;
    ans1=(L-a)*(W-b)+(a*b);
    cout<<(L*W)-ans1;
    return 0;
}



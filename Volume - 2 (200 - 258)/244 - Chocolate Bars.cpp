#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long  m,n,Mina,Rima,Tina;
    cin>>m>>n;
    Mina=m;
    Rima=n-m;
    Tina=3*Rima;
    cout<<Mina+Rima+Tina;
    return 0;
}



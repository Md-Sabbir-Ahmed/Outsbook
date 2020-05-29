#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,S, Priyonti , Priyom , Odry;
    cin>>S>>n;
    Priyom=(S-n)/4;
    Priyonti=Priyom*2;
    Odry=n+Priyom;
    cout<<"Priyom: "<<Priyom<<"Kg.\n";
    cout<<"Priyonti: "<<Priyonti<<"Kg.\n";
    cout<<"Odry: "<<Odry<<"Kg.\n";
    return 0;
}



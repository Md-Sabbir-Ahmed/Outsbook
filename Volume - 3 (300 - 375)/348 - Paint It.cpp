#include<bits/stdc++.h>
using namespace std;

int main()
{
    double w1,w2,w3,h1,h2,h3,white,blue;
    while(cin>>w1>>w2>>w3>>h1>>h2>>h3)
    {
        blue=(0.5*(w1*h1))*4;
        white=0.5*((w2*h2)+(w3*h3));
        cout<<fixed<<setprecision(1)<<blue<<" "<<white<<"\n";
    }
    return 0;
}



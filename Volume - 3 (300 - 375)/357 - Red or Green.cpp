#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1,s2;
    float r1,r2,g1,g2,gans,rans;
    while(cin>>r1>>s1>>r2>>g1>>s2>>g2)
    {
        gans=g1/g2;
        rans=r1/r2;
         if(rans>gans)
        {
            cout<<"Red\n";
        }
        else if(gans>rans)
        {
            cout<<"Green\n";
        }
        else{
            cout<<"Equal\n";
        }
    }
    return 0;
}



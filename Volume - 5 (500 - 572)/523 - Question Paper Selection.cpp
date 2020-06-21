#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    while(cin>>n)
    {

        while(n--){
        int m,one=0,zero=0;
        for(int i=1;i<=9;i++)
        {
            cin>>m;
            if(m==1)
            {
                one++;
            }
            if(m==0)
            {
                zero++;
            }
        }
        if(one>=6)
        {
            cout<<"Case "<<++c<<": Yes\n";
        }
        else{
            cout<<"Case "<<++c<<": No\n";
        }
        }
    }
    return 0;
}



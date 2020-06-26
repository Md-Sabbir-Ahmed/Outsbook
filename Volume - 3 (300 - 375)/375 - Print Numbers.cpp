#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0;
    while(cin>>n){
    if(n>0)
    {
        k++;
    }
    if(n>-27 && n!=0 && n<27)
    {
        if(n>0 && n<27 && k!=0)
        {
            char k=n+64;
            if(n%3==0)
            {
                cout<<"(+"<<n<<"+"<<k<<")\n";
            }
            else{
            cout<<"+"<<n<<"+"<<k<<"\n";
            }
        }
        else{
           char k=n*(-1)+96;
            if(n%3==0)
            {
                cout<<"("<<n<<"-"<<k<<")\n";
            }
            else{
            cout<<n<<"-"<<k<<"\n";
            }
        }
    }
    else{
        cout<<"Error!!\n";
    }
 }
    return 0;
}



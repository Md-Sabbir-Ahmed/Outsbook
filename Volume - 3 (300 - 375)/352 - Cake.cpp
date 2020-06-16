#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int ans=0;
        if(n%2==1)
        {
            ans=(n*4)+(n*1)+(n*1)+(n*5);
            cout<<"Secret Ingredients: "<<ans<<" ounce\n";
        }
        else{
            ans=(n*4*2)+(n*1*2)+(n*1*2)+(n*5*2);
            cout<<"Secret Ingredients: "<<ans<<" ounce\n";
        }
    }
    return 0;
}



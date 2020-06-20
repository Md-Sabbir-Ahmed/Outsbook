#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"0\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
               cout<<arr[i]<<"\n";
            }
            else{
               cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}



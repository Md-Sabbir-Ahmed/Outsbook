#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[1200],temp,c=0;
        temp=n;
        while(n--)
        {
            cin>>arr[c];
            c++;
        }
        int d=c;
        while(temp--)
        {
            cout<<arr[d-1]<<"\n";
            d--;
        }
    }
    return 0;
}

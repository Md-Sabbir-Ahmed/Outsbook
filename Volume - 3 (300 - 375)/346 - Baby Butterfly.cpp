#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,mid;
    while(cin>>a>>b>>c)
    {
        int arr[3]={a,b,c};
        sort(arr,arr+3);

        cout<<arr[1]*arr[1]<<"\n";
    }
    return 0;
}



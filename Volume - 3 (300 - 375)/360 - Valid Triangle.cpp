#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        int k =arr[0]+arr[1];
        if(k>=arr[2])
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}


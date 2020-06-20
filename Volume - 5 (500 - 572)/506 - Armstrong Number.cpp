#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,r;
    while(cin>>n)
    {
        int sum=0;
        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(n==sum)
        {
            cout<<n<<" is an Armstrong Number\n";
        }
        else{
             cout<<n<<" is not an Armstrong Number\n";
        }

    }
    return 0;
}


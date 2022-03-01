#include<iostream>
using namespace std;

int fact(int n)
{
    int prod=1;
    for(int i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    return prod;
}

int main()
{
    int n,r;
    cin>>n>>r;

    double ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
}
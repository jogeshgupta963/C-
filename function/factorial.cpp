#include<iostream>
using namespace std;

int fac(int n)
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
    int n;
    cin>>n;
    cout<<fac(n);

    return 0;
}
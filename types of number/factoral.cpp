#include<iostream>
using namespace std;

int main()
{
    int n,f;
    cin>>n;
    f=1;
    if(n==0)
    {
        cout<<"1"<<endl;
    }
    else{
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<f;
    }
}
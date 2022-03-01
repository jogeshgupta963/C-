#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
     int f;
    while(n>0)
    {
        int rem=n%10;
        f=f*10+rem;
        n=n/10;
    }
    cout<<f;

    
    return 0;

}
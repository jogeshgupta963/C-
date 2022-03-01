#include<iostream>
using namespace std;

/*
Eg: 42 & 24

METHOD 1:          METHOD 2:

42-24=18            42 % 24 = 18
24-18=6             24 % 18 = 6
18-6=12                 
12-6=6
HCF=6               HCF=6
*/

int hcf(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b);
    return 0;
}
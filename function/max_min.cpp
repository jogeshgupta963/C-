#include<iostream>
using namespace std;

int maxi(int a,int b,int c)
{
    int max=(a>b&&a>c)?(a):((b>a&&b>c)?(b):(c));
    return max;
}
int mini(int a,int b,int c)
{
    int min=(a<b&&a<c)?(a):((b<a&&b<c)?(b):(c));
    return min;
}
int main()
{
    int a,b,c;
    cout<<"enter 3 nos\n";
    cin>>a>>b>>c;
    cout<<maxi(a,b,c);
    cout<<mini(a,b,c);

    return 0;
    
}
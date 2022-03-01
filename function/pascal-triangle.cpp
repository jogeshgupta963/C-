#include<iostream>
using namespace std;

// 1
// 1 1
// 1 2 1              bino coefficiant vala triangle
// 1 3 3 1
// 1 4 6 4 1
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<=i;j++)
     {
         cout<<fact(i)/(fact(j)*fact(i-j));

     }   
     cout<<endl;
    }
}
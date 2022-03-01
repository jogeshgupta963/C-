#include<iostream>
using namespace std;
int sum(int n)
{
    int num=n*(n+1)/2;
    return num;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
}
#include<iostream>
using namespace std;
bool oddeven(int n)
{
    if(n%2==0)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(oddeven(n))
    cout<<"even";
    else
    cout<<"odd";
    return 0;
}
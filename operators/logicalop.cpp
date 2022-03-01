#include<iostream>
using namespace std;
//wap to check whether a number is divisble by 3,2 or both
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0)
    {
        cout<<"divisible by 2";
    }
    else if(n%3==0)
    {
       cout<<"divisible by 3";
    }
     else
     {
     cout<<"none";
     }
    return 0;
}
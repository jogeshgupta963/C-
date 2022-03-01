#include<iostream>
using namespace std;

int main()
{

    int n,c;
    cout<<"enter a number\n";
    cin>>n;
   c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=++c;
        }
    }
    if(c==2)
    cout<<"prime";
    else
    cout<<"non prime";


    return 0;
}
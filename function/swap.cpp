#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping a: "<<a<<" b: "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"befor swapping a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    

    return 0;
}
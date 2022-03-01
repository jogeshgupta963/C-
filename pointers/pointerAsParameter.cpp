#include<iostream>
using namespace std;
void swapp(int *a,int *b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;int b=4;
    cout<<"before swapping: a= "<<a<<" b= "<<b<<endl;
    swapp(&a,&b);
    cout<<"After swapping: a= "<<a<<" b= "<<b<<endl;
    return 0;
}

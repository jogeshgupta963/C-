#include<iostream>
using namespace std;
int main()
{
    
    int a[]={10,20,30};
    cout<<*a<<endl;
    int* ptr=a;

    //m1 by creating a new pointer and printing array
    for(int i=0;i<3;i++,ptr++)
    {
        cout<<*ptr<<" ";
        
    }
    cout<<endl;
    //m2: By using arr pointer directly
    for(int i=0;i<3;i++)
    {
        cout<<*(a+i)<<" ";
        //arr++ is illegal
    }
    return 0;
}
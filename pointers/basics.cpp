#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    cout<<"before inc "<<aptr<<endl<<endl;
    
    //arithmetic
    aptr++;
    cout<<aptr<<endl; //memory location will be shifted by 4 due to 4 bit space of int
    
    return 0;
}
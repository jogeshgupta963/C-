#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter 2 nos"<<endl;
    cin>>a>>b;
    cout<<"1.Addition 2.Subtraction 3.Division 4.Multiplication"<<endl;
    int ch;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Sum Of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        break;
        case 2:cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        break;
        case 3:cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        break;
        case 4:cout<<"Product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        break;
        default:cout<<"invalid";
    }
    
    
    return 0;
}
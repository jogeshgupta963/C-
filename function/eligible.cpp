#include<iostream>
using namespace std;
void vote(int age)
{
    if(age>=18)
    cout<<"eligible";
    else
    cout<<"not eligible";
}
int main()
{
    int age;
    cout<<"enter age\n";
    cin>>age;
    vote(age);
    return 0;
}
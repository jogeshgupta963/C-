#include<iostream>
using namespace std;

//input a number and tell whether it is equal to 10 or not
int main()
{
     int n;
     cout<<"enter a number"<<endl;
     cin>>n;

     if(n>10)
     {
       cout<<"greater than 10";   
     }
     else if(n<10)
     {
           cout<<"less than 10";
     }
     else{
           cout<<"equal";
     }
      return 0;
}
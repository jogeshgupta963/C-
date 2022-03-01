#include<iostream>
using namespace std;

int main(){
     
     int a,b;
     cout<<"enter a range"<<endl;
     cin>>a>>b;

     for(int i=a;i<=b;i++)
     {
         if(i%2==0)
         {
             continue;
         }
         cout<<i<<endl;
     }
    return 0;
}
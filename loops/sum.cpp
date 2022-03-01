#include<iostream>
using namespace std;

int main(){
    int n;
    
    int sum=0;
    cout<<"enter a no"<<endl;;
    cin>>n;
    // while(i<=n)
    // {
    //   sum=sum+i;
    //   i++;
    // }
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}
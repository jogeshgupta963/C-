#include<iostream>
using namespace std;

void summ(int s,int n)
{
    if(s==n){
        return;
    }
    cout<<s<<" ";
    summ(s+1,n);

}
int main()
{
    int n;cin>>n;
    summ(1,n);
    return 0;
}
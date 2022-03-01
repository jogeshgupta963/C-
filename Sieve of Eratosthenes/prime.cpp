#include<iostream>
using namespace std;
//method to get prime nos less than n
void prime(int n)
{
    int p[100]={0};
    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i*i;j<=n;j+=i){
                p[j]=1;
            }
        }
    }
    for(int j=2;j<=n;j++){
        if(p[j]==0)
        cout<<j<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}
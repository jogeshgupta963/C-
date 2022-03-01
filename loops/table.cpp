#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a no whose table u need"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){

        int sum=n*i;
        cout<<n<<"x"<<i<<"="<<sum<<endl;
    }
    return 0;
}
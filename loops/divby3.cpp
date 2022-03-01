// print all nos from 1-100 except those div by 3
#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            cout<<"-"<<endl;
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
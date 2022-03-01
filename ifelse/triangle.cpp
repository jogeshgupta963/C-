#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 sides of triangle\n";
    cin>>a>>b>>c;

    if(a==b){
        if(b==c){
            cout<<"equilateral triangle";
        }
        else{
            cout<<"isoceles";
        }
    }
    else{
        cout<<"scalene";
    }
    return 0;
}
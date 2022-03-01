#include<iostream>
using namespace std;
#define n 100

class stack{

    int*arr;
    int top;
    
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){

        if(top == n-1){
            cout<<"Stack filled "<<endl;
            return;
        }
        arr[++top]=x;

    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop out"<<endl;
        }
        top--;
    }
    int Top(){
         if(top==-1){
            cout<<"empty list"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }

};
int main()
{
    stack st;
    st.push(1);   
    st.push(2);   
    st.push(3);
    cout<<st.Top();
    st.pop();
    cout<<st.Top();
    cout<<st.empty();
    return 0;
}
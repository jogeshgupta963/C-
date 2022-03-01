#include<iostream>
#include<stack>
using namespace std;

void addAtBottom(stack<int> &st,int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    addAtBottom(st,ele);

    st.push(topele);
}

void reverse(stack<int> &st){

        if(st.empty()){
            return;
        }

        int ele=st.top();
        st.pop();
        reverse(st);
        addAtBottom(st,ele);
}


int main()
{
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
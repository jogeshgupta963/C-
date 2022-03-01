#include<iostream>
#include<queue>
using namespace std;


class stack{

    queue<int> q1;
    queue<int> q2;
    int n;
    public:
    stack(){
        n=0;
    }
    void push(int val){

        q2.push(val);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        n++;
    }
    void pop(){
        
        q1.pop();
        n--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return n;
    }
};

int main()
{   
    stack st;
    st.push(5);
    st.push(7);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    return 0;
}
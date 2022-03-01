#include<iostream>
#include<stack>
using namespace std;

int prec(char ch){

    if(ch == '^')
        return 3;
    else if(ch == '/' || ch == '*')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else
     return -1;
    
}

string convert(string s){

    stack<char> st;
    string str="";

    for(int i=0;i<s.length();i++){

        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){

            str+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){

            while(!s.empty() && st.top()!='('){

                str+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prec(st.top()) >= prec(s[i])){

                str+=st.top();
                st.pop();

            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){

        str+=st.top();
        st.pop();
    }
    return str;
}

int main()
{
    cout<<convert("(a-b/c)*(a/k-l)");
    return 0;
}
#include<bits/stdc++.h>
#include<stack>
#include<cstring>
using namespace std;

void reverse(string s){

    stack<string> st;
    for(int i=0;i<s.length();i++){
        string str="";
        while(s[i]!=' ' && i<s.length()){
            str=str+s[i];
            i++;
        }
        st.push(str);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
}

int main()
{
    stack<string> st;
    string s;
    getline(cin, s);
    reverse(s);
    return 0;
}
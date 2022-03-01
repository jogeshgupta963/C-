#include<iostream>
#include<cstring>
using namespace std;

 string rev(string s,int pos)
 {
     if(pos<0){return "";}
    string str=s.substr(pos,1);
    return str + rev(s,pos-1);
     
 }
int main()
{
    string s;
    getline(cin,s);
    int pos=s.length()-1;
    string s1=rev(s,pos);
    cout<<s1;
}
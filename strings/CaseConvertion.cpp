#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string str="";
    getline(cin,str);
    //convert into uppercase

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
    }
    cout<<str;

    //to lower case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32; 
    }
    cout<<"\n"<<str;

    //inbuilt func
    cout<<endl;
    string s="sadasdasdasda";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    return 0;
}
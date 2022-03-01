#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //m1:
    string s;

    //m2
    string s1(5,'n');
    cout<<s1<<endl;

    // m3
    string s3 = "HelloWorld";

    //input a sentence
    string s4;
    getline(cin,s4);
    cout<<s4<<endl;
    return 0;
}
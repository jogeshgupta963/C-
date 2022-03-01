#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string s="324242424242424";
    sort(s.end(),s.begin());
    cout<<s;
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string s="324242424242424";
    sort(s.begin(),s.end(), greater<int>() );
    cout<<s;
    // for(int i=s.length()-1;i>=0;i--)
    //     cout<<s[i];
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
     char ch;
     cout<<"enter an alphabet to check whether it is a vowel or not"<<endl;
     cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"vowel"<<endl;
        break;
        default:cout<<"consoant";
    }
    
    return 0;
}
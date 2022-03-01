#include<iostream>
using namespace std;

int main()
{
    int button;
    
    
    cout<<"which lang do u want hello in??"<<endl;
    cout<<"1.English 2.Hindi 3.french 4.Spanish 5.Japanese";
    cout<<"input a no"<<endl;
    cin>>button;
    switch(button)
    {
        case 1: cout<<"hello";
        break;
        case 2: cout<<"Namaste"<<endl;
        break;
        case 3: cout<<"Bonjour"<<endl;
        break;
        case 4: cout<<"Hola"<<endl;
        break;
        case 5: cout<<"Konnichiwa"<<endl;
        break;
        default: cout<<"invadid Input"<<endl;
        break;
    }
    return 0;
}
// digits ka cube krk add

#include<iostream>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    int backup=n;
    num=0;
    while(n>0)
    {
       int rem=n%10;
       num=num+ (rem*rem*rem);
       n=n/10;
    }
    if(num==backup)
      cout<<"armstrong"<<endl;
      else
      cout<<"not armstrong";

    return 0;
}

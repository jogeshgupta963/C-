#include<bits/stdc++.h>
#include<iostream>
#include<cstring>

using namespace std;

int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int rem=n%10;
        ans=ans+x*rem;
        x=x*2;
        n=n/10;
    }
    return ans;
}



int octalToDecimal(int n)
{
   int ans=0;
   int x=1;
   while(n>0)
   {
       int rem=n%10;
       ans=ans+x*rem;
       x=x*8;
       n/=10;
   }
   return ans;
}


int hexaDecimalToDecimal(string  n)
{
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A'&& n[i]<='F')
        {
            ans+=x*(n[i]-'A'+ 10);
        }
        x*=16;
    }
    return ans;

}

int main()
{
    int binary;
    cout<<"enter binary\n";
    cin>>binary;
    cout<<"binary to decimal: "<<binaryToDecimal(binary)<<endl;
    
    int octal;
    cout<<"enter octal no\n";
    cin>>octal;
    cout<<"octal to decimal: "<<octalToDecimal(octal)<<endl;
   
   string hexadecimal;
   cout<<"enter a hexadecimal no/n";
   cin>>hexadecimal;
    cout<<"hexadecimal to decimal: "<<hexaDecimalToDecimal(hexadecimal)<<endl;


    return 0;
}
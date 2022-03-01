#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int decimalToBinary(int n)
{
    int x = 1; //max power dhund rhe h
    int ans=0;
    while(x<=n)
     x*=2;
     x/=2;

     while(x>0)
     {
         int Last_Digit=n/x;
         n-=Last_Digit*x;
         x/=2;
         ans=ans*10 + Last_Digit;
     }
     return ans;
}



int decimalTOoctal(int n)
{
     int x = 1; //max power dhund rhe h
    int ans=0;
    while(x<=n)
     x*=8;
     x/=8;

     while(x>0)
     {
         int Last_Digit=n/x;
         n-=Last_Digit*x;
         x/=8;
         ans=ans*10 + Last_Digit;
     }
     return ans;
}


string decimalToHexaDecimal(int n)
{
   int x=1;
   string ans="";
   while(x<+n)
   x*=16;
   x/=16;

   while(x>0)
   { 
       int lastdigit=n/x;
       n-=lastdigit*x;
       x/=16;

       if(lastdigit<=9)
         ans=ans+ to_string(lastdigit);

        else
        {
            char c= 'A' +lastdigit-10;
            ans.push_back(c);
        }
   }

   return ans;
}


int main()
{
      int decimal;
      cout<<"enter a decimal no  ";
      cin>>decimal;

      //decimal to binaryy
      cout<<"\n decimal to binary: "<<decimalToBinary(decimal);

      //decimal to octal
      cout<<"\n decimal to octal: "<<decimalTOoctal(decimal);

      //decimal to hexadecimal
      cout<<"\n decimal to hexadecimal: "<<decimalToHexaDecimal(decimal);
}
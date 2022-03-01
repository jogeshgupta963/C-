#include<iostream>
using namespace std;

/*
*             *
* *         * *
* * *     * * *
* * * * * * * *          for n=4;
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/
 int main()
 {
    int n;
    cin>>n;
     
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<"*";
         }
             int k=2*n-2*i;
             for(int j=1;j<=k;j++)
             {
                 cout<<" ";
             }
             
         for(int j=1;j<=i;j++)
         {
             cout<<"*";
         }
         cout<<endl;
         
     }
     for(int i=n;i<=1;i--)
     {
         for(int j=1;j<=i;j++)
         {
             cout<<"*";
         }
             int k=2*n-2*i;
             for(int j=1;j<=k;j++)
             {
                 cout<<" ";
             }
             
         for(int j=1;j<=i;j++)
         {
             cout<<"*";
         }
         cout<<endl;
         
     }
     
    return 0;
 }
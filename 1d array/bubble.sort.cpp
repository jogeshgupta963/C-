#include<iostream>
using namespace std;
//consecutive swapping 
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // my sort code

    for(int j=0;j<n;j++) 
     {
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            int c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }
     
     }

     //bubble sort
    //  int counter=1;
    
    //  while(counter<n)
    //  {
    //       for(int i=0;i<n-counter;i++)
    //       {
    //           if(a[i]>a[i+1])
    //           {
    //                int c=a[i];
    //               a[i]=a[i+1];
    //               a[i+1]=c;
    //           }
    //       }
    //  }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
// TC=O(n*n)
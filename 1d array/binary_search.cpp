#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key)
{
    int s=0;
    int l=n;
    while(s<=l)
    {
       int m=(s+l)/2;
       if(a[m]==key)
       {
             return m+1;
       }
       else if(a[m]>key)
       {
           l=m-1;

       }
       else{
           s=m+1;
       }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"enter search element ";
    cin>>key;
     
    cout<<binarySearch(a,n,key);
    return 0;
}

/* TC

  first loop  -->n
  2nd loop --> n/2
  3rd loop -->n/4
  kth loop --> n/(2^K)  length of array becomes 1

  n/(2^K)=1
  log n=k log 2
  
  TC= O(log n/log 2)
  */
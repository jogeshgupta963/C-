#include<iostream>
using namespace std;
//min element dhundkr swap

void selectionSort(int a[],int n)
{
    int min=a[0];
   for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
          if(a[j]<a[i])
          {
              int c=a[i];
               a[i]=a[j];
               a[j]=c;

          }
      }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   return ;
    
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
    selectionSort(a,n);

    return 0;
}
// TC:)(n*n)
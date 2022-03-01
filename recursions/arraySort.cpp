#include<iostream>
using namespace std;

bool sorting(int arr[],int n)
{
  if(n==0)
  {
    return true;
  }
  if(arr[n]<arr[n-1])
  {return false;}
  return sorting(arr,n-1);
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int i=0;
  cout<<sorting(arr,n);

  return 0;
}
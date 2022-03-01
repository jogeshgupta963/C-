#include<iostream>
using namespace std;


int first(int arr[],int n,int key,int i)
{

    if(i == n)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return first(arr,n,key,i+1);

}
int second(int arr[],int n,int key)
{

    if(n==0)
    {
        return -1;
    }
    if(arr[n] == key)
    {
        return n;
    }
    return second(arr,n-1,key);

}
int main()
{
    int n;
    cin>>n;
    int key;
    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];


    cin>>key;
    //first occurence
    int i=0;
    cout<<first(arr,n,key,i);

    //second occurence
    cout<<second(arr,n,key);
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int** a;
    a= new int*[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i]=new int[m];
        }
    }
    //inputt
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;

    // output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //deleting

    for(int i=0;i<m;i++)
    delete [] a[i];
    delete []a;
    return 0;
}
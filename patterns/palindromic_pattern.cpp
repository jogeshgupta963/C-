#include<iostream>
using namespace std;

/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/

int main()
{
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        int j=1;
        for(;j<=n-i;j++)
        {
            cout<<" ";
            
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--;
        }
         k=2;
        for(;j<=n+i-1;j++)
        {
        cout<<k++;
        }
        cout<<endl;
    }

    return 0;
}
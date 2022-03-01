#include<iostream>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    //search
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<m;j++)
        {
            if(key==a[i][j])
            {
                cout<<"Element Found at "<<i<<" "<<j<<endl;
            }
        }
    }
    
    return 0;
}
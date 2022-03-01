#include<iostream>
using namespace std;

int main(){
    cout<<"enter no of rows and colums\n";
    int n,m;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"elements of the array are:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }

    //searching

    int x;
    cin>>x;
    for(int i=0;i,n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<"element is found";
                break;
            }
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
//basically copied the main array into a backup array while replacing cols with rows(my method)
int main()
{
    int n;
    cin>>n;
    int a[n][n],arr[n][n];
    
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cin>>a[i][j];}}
    //transposing

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            arr[j][i]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<arr[i][j]<<" ";}cout<<endl;}
    
    return 0;
}
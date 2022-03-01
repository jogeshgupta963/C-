#include<iostream>
using namespace std;

/*
 |  1  2  3|                ----->
 |  4  5  6|   print order: ^     |
 |  7  8  9|                <-----v
 
*/
int main()
{
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    //traversing
     int row_start=0;
     int row_end=n-1;
     int col_start=0;
     int col_end=m-1;

     while(row_start<=row_end && col_start<=col_end)
     {
         //for row start
         for(int i=col_start;i<=col_end;i++)
         {
             cout<<a[row_start][i]<<" ";
         }
         row_start++;
         //for col end
         for(int i=row_start;i<=row_end;i++)
         {
             cout<<a[i][col_end]<<" ";
         }
         col_end--;
         
         //for last row
         for(int i=col_end;i>=col_start;i--)
         {
             cout<<a[row_end][i]<<" ";
         }
         row_end--;
         //for col start
         for(int i=row_end;i>=row_start;i--)
         {
             cout<<a[i][col_start]<<" ";
         }
         col_start++;
     }
    return 0;
}
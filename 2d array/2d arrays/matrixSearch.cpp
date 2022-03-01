#include <iostream>
using namespace std;

//matri is sorted from left to right
/*
    1  4  7  11 
    2  5  8  12
    3  6  9  16
    10 13 14 17
*/
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    //searching
    int key;
    cin >> key;
    int row_slider = 0, col_slider = m-1;
    int flag=0;
    while(row_slider<n &&col_slider>=0)
    {
            if (a[row_slider][col_slider] > key)
            {
                col_slider--;
            }
            if(a[row_slider][col_slider] < key)
            {
               row_slider++;
            }
            if(a[row_slider][col_slider]==key)
            {
                
                flag=1;
                break;
            }
        
    }
    (flag==1)?(cout<<"found"):(cout<<"notfound");
    return 0;
}